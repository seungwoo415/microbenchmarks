#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>

#include "GoFetch/re/src/lib/eviction_set/sys_utils.h"

struct list {
    uint64_t value;
    char pad[56];
};
typedef struct list element;

int main (int argc, char *argv[]) {
    
    pin_cpu(4);
    init_kpc(); 
    uint64_t T1, T0, latency;
    asm volatile( \
            "dsb sy\n\t" \
            "isb\n\t" \
            "mrs %[latency], S3_2_c15_c0_0\n\t" \
            "isb\n\t" \
            "dsb sy\n\t" \
            : [latency] "=r" (T0)
            ::);
    MEM_BARRIER;



    uint64_t size=32;
    uint64_t x=200000;

    uint64_t i = 0;
    uint64_t jump = 0;
    uint64_t count = 0;

    element *ptr_vector;
    ptr_vector = (element *)valloc(sizeof(element) * size);

    for (i = 0; i < size; i++) {
        ptr_vector[i].value = 1;
    }

    asm volatile ("nop");
    asm volatile ("nop");
    asm volatile ("nop");
    for (i = 0; i < x; i++) {
        for (jump = 0; jump <= size - 32; jump += 32) {

            count += ptr_vector[jump + 0].value;
            count += ptr_vector[jump + 1].value;
            count += ptr_vector[jump + 2].value;
            count += ptr_vector[jump + 3].value;
            count += ptr_vector[jump + 4].value;
            count += ptr_vector[jump + 5].value;
            count += ptr_vector[jump + 6].value;
            count += ptr_vector[jump + 7].value;

            count += ptr_vector[jump + 8].value;
            count += ptr_vector[jump + 9].value;
            count += ptr_vector[jump + 10].value;
            count += ptr_vector[jump + 11].value;
            count += ptr_vector[jump + 12].value;
            count += ptr_vector[jump + 13].value;
            count += ptr_vector[jump + 14].value;
            count += ptr_vector[jump + 15].value;

            count += ptr_vector[jump + 16].value;
            count += ptr_vector[jump + 17].value;
            count += ptr_vector[jump + 18].value;
            count += ptr_vector[jump + 19].value;
            count += ptr_vector[jump + 20].value;
            count += ptr_vector[jump + 21].value;
            count += ptr_vector[jump + 22].value;
            count += ptr_vector[jump + 23].value;

            count += ptr_vector[jump + 24].value;
            count += ptr_vector[jump + 25].value;
            count += ptr_vector[jump + 26].value;
            count += ptr_vector[jump + 27].value;
            count += ptr_vector[jump + 28].value;
            count += ptr_vector[jump + 29].value;
            count += ptr_vector[jump + 30].value;
            count += ptr_vector[jump + 31].value;
        }
    }
    asm volatile ("nop");
    asm volatile ("nop");
    asm volatile ("nop");
    MEM_BARRIER;

    asm volatile( \
            "dsb sy\n\t" \
            "isb\n\t" \
            "mrs %[latency], S3_2_c15_c0_0\n\t" \
            "isb\n\t" \
            "dsb sy\n\t" \
            : [latency] "=r" (T1)
            ::);
    printf("%"PRIu64"\n", count);
    latency = T1 - T0;
    printf("%"PRIu64"\n", latency);
    
    exit(EXIT_SUCCESS);
}
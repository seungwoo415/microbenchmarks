#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>

#include "GoFetch/re/src/lib/eviction_set/sys_utils.h"

struct list {
    uint64_t value;
    struct list *next_element;
    char pad[48];
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

    uint64_t i = 0, j = 0;
    uint64_t print = 0;
    element *ptr_list = NULL;
    ptr_list = (element *)valloc(sizeof(element) * size);
    element *ptr_this;

    ptr_this = ptr_list;
    for (i = 0; i < size; i++) {
        ptr_this->value = 1;
        ptr_this->next_element = &ptr_list[i+1];
        ptr_this = ptr_this->next_element;
        ptr_this->next_element = NULL;
    }

    asm volatile ("nop");
    asm volatile ("nop");
    asm volatile ("nop");
    ptr_this = ptr_list;
    for (i = 0; i < x; i++) {
        ptr_this = ptr_list;
        for (j = 0; j <= size - 32; j += 32) {
            ptr_this = ptr_this->next_element;
            ptr_this = ptr_this->next_element;
            ptr_this = ptr_this->next_element;
            ptr_this = ptr_this->next_element;
            ptr_this = ptr_this->next_element;
            ptr_this = ptr_this->next_element;
            ptr_this = ptr_this->next_element;
            ptr_this = ptr_this->next_element;

            ptr_this = ptr_this->next_element;
            ptr_this = ptr_this->next_element;
            ptr_this = ptr_this->next_element;
            ptr_this = ptr_this->next_element;
            ptr_this = ptr_this->next_element;
            ptr_this = ptr_this->next_element;
            ptr_this = ptr_this->next_element;
            ptr_this = ptr_this->next_element;

            ptr_this = ptr_this->next_element;
            ptr_this = ptr_this->next_element;
            ptr_this = ptr_this->next_element;
            ptr_this = ptr_this->next_element;
            ptr_this = ptr_this->next_element;
            ptr_this = ptr_this->next_element;
            ptr_this = ptr_this->next_element;
            ptr_this = ptr_this->next_element;

            ptr_this = ptr_this->next_element;
            ptr_this = ptr_this->next_element;
            ptr_this = ptr_this->next_element;
            ptr_this = ptr_this->next_element;
            ptr_this = ptr_this->next_element;
            ptr_this = ptr_this->next_element;
            ptr_this = ptr_this->next_element;
            ptr_this = ptr_this->next_element;

            print = ptr_this->value;
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
    latency = T1 - T0;
    printf("%"PRIu64"\n", latency);
    exit(EXIT_SUCCESS);
}
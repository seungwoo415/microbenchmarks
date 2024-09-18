#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h> 

#include "GoFetch/re/src/lib/eviction_set/sys_utils.h"

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

    uint64_t x=200000;

    uint64_t jump = 1;
    uint64_t i = 0; 
    uint64_t print = 0;

    asm volatile ("nop");
    asm volatile ("nop");
    asm volatile ("nop");

    for (i = 0; i < x; i++) {
        if (jump) {
            jump = 0;
            print += i;
        }
        else {
            jump = 1;
            print -= i;
        }
    }

    asm volatile ("nop");
    asm volatile ("nop");
    asm volatile ("nop");
    MEM_BARRIER;

    (void) print;

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
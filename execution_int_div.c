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

    uint64_t i = 0;
    uint64_t count = 0;

    asm volatile ("nop");
    asm volatile ("nop");
    asm volatile ("nop");

    asm volatile("mov x0, #0" : : : "x0");   
    asm volatile("mov x1, #0" : : : "x1");   
    asm volatile("mov x2, #1" : : : "x2");

    for (i = 1; i <= x; i++) {
        asm volatile("sdiv x0, x0, x2\n" : : : "x0", "x2");
        asm volatile("sdiv x0, x0, x2\n" : : : "x0", "x2");
        asm volatile("sdiv x0, x0, x2\n" : : : "x0", "x2");
        asm volatile("sdiv x0, x0, x2\n" : : : "x0", "x2");

        asm volatile("sdiv x0, x0, x2\n" : : : "x0", "x2");
        asm volatile("sdiv x0, x0, x2\n" : : : "x0", "x2");
        asm volatile("sdiv x0, x0, x2\n" : : : "x0", "x2");
        asm volatile("sdiv x0, x0, x2\n" : : : "x0", "x2");

        asm volatile("sdiv x0, x0, x2\n" : : : "x0", "x2");
        asm volatile("sdiv x0, x0, x2\n" : : : "x0", "x2");
        asm volatile("sdiv x0, x0, x2\n" : : : "x0", "x2");
        asm volatile("sdiv x0, x0, x2\n" : : : "x0", "x2");

        asm volatile("sdiv x0, x0, x2\n" : : : "x0", "x2");
        asm volatile("sdiv x0, x0, x2\n" : : : "x0", "x2");
        asm volatile("sdiv x0, x0, x2\n" : : : "x0", "x2");
        asm volatile("sdiv x0, x0, x2\n" : : : "x0", "x2");

    }
    asm volatile ("nop");
    asm volatile ("nop");
    asm volatile ("nop");
    MEM_BARRIER;

    asm volatile("mov %0, x2" : "=r"(count) : : "x2");

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
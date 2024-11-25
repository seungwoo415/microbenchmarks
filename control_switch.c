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

    unsigned int i=0, j=-1, k=2, l=3, m=-1, n=5,o=6;
    uint64_t x=200000;

    asm volatile ("nop");
    asm volatile ("nop");
    asm volatile ("nop");


    for (i=0;i<x;i++) {
        if (i%2 == 0) {
            j++;
            switch (j & 3) {
                case 0:
                    k++;
                break;

                case 2:
                case 3:
                    l++;
                break;
            }
        }
        else {
            m++;
            switch (m & 7) {
                case 0:
                case 1:
                case 2:
                case 3:
                    o++;
                break;

                case 4:
                case 5:
                case 6:
                    n++;
                break;
            }
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
    printf("i: %d,  m: %d\n", i, m);
    exit(EXIT_SUCCESS);
}
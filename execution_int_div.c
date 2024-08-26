#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>

#include "GoFetch/re/src/lib/eviction_set/sys_utils.h"

int main (int argc, char *argv[]) {

    init_kpc(); 
    configure_kpc();
    uint64_t latency = 5;


    uint64_t x=20;

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

    asm volatile("mov %0, x2" : "=r"(count) : : "x2");

    latency = get_kpc_time();
    printf("%"PRIu64"\n", latency);

    //printf("%"PRIu64"\n", count);

    exit(EXIT_SUCCESS);
}
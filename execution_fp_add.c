#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>

#include "GoFetch/re/src/lib/eviction_set/sys_utils.h"

// =============================================================================
uint64_t string_to_uint64(char *string) {
    uint64_t result = 0;
    char c;

    for (  ; (c = *string ^ '0') <= 9 && c >= 0; ++string) {
        result = result * 10 + c;
    }
    return result;
};

// =============================================================================
int main (int argc, char *argv[]) {

    init_kpc(); 
    configure_kpc();
    uint64_t latency = 5;

    uint64_t x=20;
    
    uint64_t i = 0;
    double count = 0;
    double in = 0.00;

    asm volatile ("nop");
    asm volatile ("nop");
    asm volatile ("nop");

    asm volatile("stp x0, xzr, [sp, #-16]!");

    asm volatile("fmov d0, xzr");  // Set d0 to zero
    asm volatile("fmov d1, xzr");  // Set d1 to zero
    asm volatile("fmov d2, xzr");  // Set d2 to zero
    asm volatile("fmov d3, xzr");  // Set d3 to zero
    asm volatile("fmov d4, xzr");  // Set d4 to zero
    asm volatile("fmov d5, xzr");  // Set d5 to zero
    asm volatile("fmov d6, xzr");  // Set d6 to zero
    asm volatile("fmov d7, xzr");  // Set d7 to zero

    asm volatile("ldr d0, [sp]");         // Load value from stack into d0
    asm volatile("ldr d1, [sp, #8]");     // Load value from stack into d1
    asm volatile("ldr d2, [sp, #16]");    // Load value from stack into d2
    asm volatile("ldr d3, [sp, #24]");    // Load value from stack into d3
    asm volatile("ldr d4, [sp, #32]");    // Load value from stack into d4
    asm volatile("ldr d5, [sp, #40]");    // Load value from stack into d5
    asm volatile("ldr d6, [sp, #48]");    // Load value from stack into d6
    asm volatile("ldr d7, [sp, #56]");    // Load value from stack into d7

    asm volatile("ldp x0, xzr, [sp], #64" : : : "memory");

    for (i = 1; i <= x; i++) {
         asm volatile("fadd d0, d0, d0");
        asm volatile("fadd d1, d1, d1");
        asm volatile("fadd d2, d2, d2");
        asm volatile("fadd d3, d3, d3");
        asm volatile("fadd d4, d4, d4");
        asm volatile("fadd d5, d5, d5");
        asm volatile("fadd d6, d6, d6");
        asm volatile("fadd d7, d7, d7");

        asm volatile("fadd d0, d0, d0");
        asm volatile("fadd d1, d1, d1");
        asm volatile("fadd d2, d2, d2");
        asm volatile("fadd d3, d3, d3");
        asm volatile("fadd d4, d4, d4");
        asm volatile("fadd d5, d5, d5");
        asm volatile("fadd d6, d6, d6");
        asm volatile("fadd d7, d7, d7");

        asm volatile("fadd d0, d0, d0");
        asm volatile("fadd d1, d1, d1");
        asm volatile("fadd d2, d2, d2");
        asm volatile("fadd d3, d3, d3");
        asm volatile("fadd d4, d4, d4");
        asm volatile("fadd d5, d5, d5");
        asm volatile("fadd d6, d6, d6");
        asm volatile("fadd d7, d7, d7");
    }

    asm volatile("stp xzr, xzr, [sp, #-16]!");  // Push zero onto stack
    asm volatile("str d0, [sp]");               // Store d0 to stack
    asm volatile("ldr %0, [sp]" : "=r"(count) : : );  // Load result from stack
    asm volatile("ldr xzr, [sp], #16");  // Pop the stack and restore

    //printf("%lf\n", count);

    asm volatile ("nop");
    asm volatile ("nop");
    asm volatile ("nop");

    latency = get_kpc_time();
    printf("%"PRIu64"\n", latency);


    exit(EXIT_SUCCESS);
}
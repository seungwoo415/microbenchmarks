#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>

// =============================================================================
uint64_t string_to_binary(char *string) {
    uint64_t result = 0;
    while (*string != '\0') {
        result = result * 2 + (*string - '0');
        string++;
    }
    return result;
}

// =============================================================================
int main (int argc, char *argv[]) {

    init_kpc(); 
    configure_kpc();
    uint64_t latency = 5;

    uint64_t x;
    if(argc == 2) {
        x = string_to_binary(argv[1]);
    }
    else {
        printf("incorrect input.\n");
        exit(EXIT_FAILURE);
    }

    uint64_t i = 0;
    uint64_t count0 = 1;
    uint64_t count1 = 1;
    uint64_t count2 = 1;
    uint64_t count3 = 1;
    uint64_t count4 = 1;
    uint64_t count5 = 1;

    asm volatile ("nop");
    asm volatile ("nop");
    asm volatile ("nop");

    for (i=0; i<x; i++) {
        asm volatile("add %0, %1, %2" : "=r" (count0) : "r" (count0), "r" (count0));
        asm volatile("add %0, %1, %2" : "=r" (count1) : "r" (count1), "r" (count1));
        asm volatile("add %0, %1, %2" : "=r" (count2) : "r" (count2), "r" (count2));
        asm volatile("add %0, %1, %2" : "=r" (count3) : "r" (count3), "r" (count3));
        asm volatile("add %0, %1, %2" : "=r" (count4) : "r" (count4), "r" (count4));
        asm volatile("add %0, %1, %2" : "=r" (count5) : "r" (count5), "r" (count5));

        asm volatile("add %0, %1, %2" : "=r" (count0) : "r" (count0), "r" (count0));
        asm volatile("add %0, %1, %2" : "=r" (count1) : "r" (count1), "r" (count1));
        asm volatile("add %0, %1, %2" : "=r" (count2) : "r" (count2), "r" (count2));
        asm volatile("add %0, %1, %2" : "=r" (count3) : "r" (count3), "r" (count3));
        asm volatile("add %0, %1, %2" : "=r" (count4) : "r" (count4), "r" (count4));
        asm volatile("add %0, %1, %2" : "=r" (count5) : "r" (count5), "r" (count5));

        asm volatile("add %0, %1, %2" : "=r" (count0) : "r" (count0), "r" (count0));
        asm volatile("add %0, %1, %2" : "=r" (count1) : "r" (count1), "r" (count1));
        asm volatile("add %0, %1, %2" : "=r" (count2) : "r" (count2), "r" (count2));
        asm volatile("add %0, %1, %2" : "=r" (count3) : "r" (count3), "r" (count3));
        asm volatile("add %0, %1, %2" : "=r" (count4) : "r" (count4), "r" (count4));
        asm volatile("add %0, %1, %2" : "=r" (count5) : "r" (count5), "r" (count5));

    }

    asm volatile ("nop");
    asm volatile ("nop");
    asm volatile ("nop");


    latency = get_kpc_time();
    printf("%"PRIu64"\n", latency);
    printf("%"PRIu64"\n", count0);
    exit(EXIT_SUCCESS);
}
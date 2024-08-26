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
    uint64_t count0 = 1 ;
    uint64_t count1 = 1 ;
    uint64_t count2 = 1 ;
    uint64_t count3 = 1 ;
    uint64_t count4 = 1 ;
    uint64_t count5 = 1 ;
    uint64_t count6 = 1 ;
    uint64_t count7 = 1 ;


    asm volatile ("nop");
    asm volatile ("nop");
    asm volatile ("nop");
    for (i = 1; i <= x; i++) {
        asm volatile("mul %0, %1, %2" : "=r" (count0) : "r" (count0), "r" (count0));
        asm volatile("mul %0, %1, %2" : "=r" (count1) : "r" (count1), "r" (count1));
        asm volatile("mul %0, %1, %2" : "=r" (count2) : "r" (count2), "r" (count2));
        asm volatile("mul %0, %1, %2" : "=r" (count3) : "r" (count3), "r" (count3));
        asm volatile("mul %0, %1, %2" : "=r" (count4) : "r" (count4), "r" (count4));
        asm volatile("mul %0, %1, %2" : "=r" (count5) : "r" (count5), "r" (count5));
        asm volatile("mul %0, %1, %2" : "=r" (count6) : "r" (count6), "r" (count6));
        asm volatile("mul %0, %1, %2" : "=r" (count7) : "r" (count7), "r" (count7));

        asm volatile("mul %0, %1, %2" : "=r" (count0) : "r" (count0), "r" (count0));
        asm volatile("mul %0, %1, %2" : "=r" (count1) : "r" (count1), "r" (count1));
        asm volatile("mul %0, %1, %2" : "=r" (count2) : "r" (count2), "r" (count2));
        asm volatile("mul %0, %1, %2" : "=r" (count3) : "r" (count3), "r" (count3));
        asm volatile("mul %0, %1, %2" : "=r" (count4) : "r" (count4), "r" (count4));
        asm volatile("mul %0, %1, %2" : "=r" (count5) : "r" (count5), "r" (count5));
        asm volatile("mul %0, %1, %2" : "=r" (count6) : "r" (count6), "r" (count6));
        asm volatile("mul %0, %1, %2" : "=r" (count7) : "r" (count7), "r" (count7));

        asm volatile("mul %0, %1, %2" : "=r" (count0) : "r" (count0), "r" (count0));
        asm volatile("mul %0, %1, %2" : "=r" (count1) : "r" (count1), "r" (count1));
        asm volatile("mul %0, %1, %2" : "=r" (count2) : "r" (count2), "r" (count2));
        asm volatile("mul %0, %1, %2" : "=r" (count3) : "r" (count3), "r" (count3));
        asm volatile("mul %0, %1, %2" : "=r" (count4) : "r" (count4), "r" (count4));
        asm volatile("mul %0, %1, %2" : "=r" (count5) : "r" (count5), "r" (count5));
        asm volatile("mul %0, %1, %2" : "=r" (count6) : "r" (count6), "r" (count6));
        asm volatile("mul %0, %1, %2" : "=r" (count7) : "r" (count7), "r" (count7));

        asm volatile("mul %0, %1, %2" : "=r" (count0) : "r" (count0), "r" (count0));
        asm volatile("mul %0, %1, %2" : "=r" (count1) : "r" (count1), "r" (count1));
        asm volatile("mul %0, %1, %2" : "=r" (count2) : "r" (count2), "r" (count2));
        asm volatile("mul %0, %1, %2" : "=r" (count3) : "r" (count3), "r" (count3));
        asm volatile("mul %0, %1, %2" : "=r" (count4) : "r" (count4), "r" (count4));
        asm volatile("mul %0, %1, %2" : "=r" (count5) : "r" (count5), "r" (count5));
        asm volatile("mul %0, %1, %2" : "=r" (count6) : "r" (count6), "r" (count6));
        asm volatile("mul %0, %1, %2" : "=r" (count7) : "r" (count7), "r" (count7));
    }
    asm volatile ("nop");
    asm volatile ("nop");
    asm volatile ("nop");

    latency = get_kpc_time();
    printf("%"PRIu64"\n", latency);
    //printf("%"PRIu64"\n", count0);

    exit(EXIT_SUCCESS);
}
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h> 

#include "GoFetch/re/src/lib/eviction_set/sys_utils.h"

int main (int argc, char *argv[]) {

    init_kpc(); 
    configure_kpc();
    uint64_t latency = 5;


    unsigned int x;
    if(argc == 2) {
        x = string_to_binary(argv[1]);
    }
    else {
        printf("no argument");
        exit(EXIT_FAILURE);
    }

    uint64_t i = 0;
    uint64_t jump = 1;
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

    (void) print;

    latency = get_kpc_time();
    printf("%"PRIu64"\n", latency);
    printf("%"PRIu64"\n", print);
    exit(EXIT_SUCCESS);
}
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>

#include "GoFetch/re/src/lib/eviction_set/sys_utils.h"

int main (int argc, char *argv[]) {

    init_kpc(); 
    configure_kpc();
    uint64_t latency = 5;

    unsigned int i=0, j=-1, k=2, l=3, m=-1, n=5,o=6;
    unsigned int x=20;

    asm volatile ("nop");
    asm volatile ("nop");
    asm volatile ("nop");

    int z; 
    if(x) {
        z = 21;
    } else {
        z = 91;
    }

    for (i=0;i<z;i++) {
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

    latency = get_kpc_time();
    printf("%"PRIu64"\n", latency);

    exit(EXIT_SUCCESS);
}
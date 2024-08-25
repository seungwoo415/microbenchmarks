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
        printf("Incorrect input. \n");
        exit(EXIT_FAILURE);
    }

    uint64_t i = 0;
    double count = 0;
    double in = 1.00;

    asm volatile ("nop");
    asm volatile ("nop");
    asm volatile ("nop");

    asm volatile("push %0"::"r"(in):);

    asm volatile("subsd %%xmm0, %%xmm0" : : : "xmm0");
    asm volatile("subsd %%xmm1, %%xmm1" : : : "xmm1");
    asm volatile("subsd %%xmm2, %%xmm2" : : : "xmm2");
    asm volatile("subsd %%xmm3, %%xmm3" : : : "xmm3");
    asm volatile("subsd %%xmm4, %%xmm4" : : : "xmm4");
    asm volatile("subsd %%xmm5, %%xmm5" : : : "xmm5");
    asm volatile("subsd %%xmm6, %%xmm6" : : : "xmm6");
    asm volatile("subsd %%xmm7, %%xmm7" : : : "xmm7");

    asm volatile("movsd (%%rsp), %%xmm0" : : : "xmm0");
    asm volatile("movsd (%%rsp), %%xmm1" : : : "xmm1");
    asm volatile("movsd (%%rsp), %%xmm2" : : : "xmm2");
    asm volatile("movsd (%%rsp), %%xmm3" : : : "xmm3");
    asm volatile("movsd (%%rsp), %%xmm4" : : : "xmm4");
    asm volatile("movsd (%%rsp), %%xmm5" : : : "xmm5");
    asm volatile("movsd (%%rsp), %%xmm6" : : : "xmm6");
    asm volatile("movsd (%%rsp), %%xmm7" : : : "xmm7");

    asm volatile("pop %%rbx" : : : "rbx");

    for (i = 1; i <= x; i++) {
        asm volatile("mulsd %%xmm0, %%xmm0" : : : "xmm0");
        asm volatile("mulsd %%xmm1, %%xmm1" : : : "xmm1");
        asm volatile("mulsd %%xmm2, %%xmm2" : : : "xmm2");
        asm volatile("mulsd %%xmm3, %%xmm3" : : : "xmm3");
        asm volatile("mulsd %%xmm4, %%xmm4" : : : "xmm4");
        asm volatile("mulsd %%xmm5, %%xmm5" : : : "xmm5");
        asm volatile("mulsd %%xmm6, %%xmm6" : : : "xmm6");
        asm volatile("mulsd %%xmm7, %%xmm7" : : : "xmm7");

        asm volatile("mulsd %%xmm0, %%xmm0" : : : "xmm0");
        asm volatile("mulsd %%xmm1, %%xmm1" : : : "xmm1");
        asm volatile("mulsd %%xmm2, %%xmm2" : : : "xmm2");
        asm volatile("mulsd %%xmm3, %%xmm3" : : : "xmm3");
        asm volatile("mulsd %%xmm4, %%xmm4" : : : "xmm4");
        asm volatile("mulsd %%xmm5, %%xmm5" : : : "xmm5");
        asm volatile("mulsd %%xmm6, %%xmm6" : : : "xmm6");
        asm volatile("mulsd %%xmm7, %%xmm7" : : : "xmm7");

        asm volatile("mulsd %%xmm0, %%xmm0" : : : "xmm0");
        asm volatile("mulsd %%xmm1, %%xmm1" : : : "xmm1");
        asm volatile("mulsd %%xmm2, %%xmm2" : : : "xmm2");
        asm volatile("mulsd %%xmm3, %%xmm3" : : : "xmm3");
        asm volatile("mulsd %%xmm4, %%xmm4" : : : "xmm4");
        asm volatile("mulsd %%xmm5, %%xmm5" : : : "xmm5");
        asm volatile("mulsd %%xmm6, %%xmm6" : : : "xmm6");
        asm volatile("mulsd %%xmm7, %%xmm7" : : : "xmm7");

        asm volatile("mulsd %%xmm0, %%xmm0" : : : "xmm0");
        asm volatile("mulsd %%xmm1, %%xmm1" : : : "xmm1");
        asm volatile("mulsd %%xmm2, %%xmm2" : : : "xmm2");
        asm volatile("mulsd %%xmm3, %%xmm3" : : : "xmm3");
        asm volatile("mulsd %%xmm4, %%xmm4" : : : "xmm4");
        asm volatile("mulsd %%xmm5, %%xmm5" : : : "xmm5");
        asm volatile("mulsd %%xmm6, %%xmm6" : : : "xmm6");
        asm volatile("mulsd %%xmm7, %%xmm7" : : : "xmm7");
    }

    asm volatile("push $0x0":::);
    asm volatile("movsd %%xmm0, (%%rsp)" : : : );
    asm volatile("mov (%%rsp), %0" : "=r"(count) : : );
    asm volatile("pop %%rbx" : : : "rbx");

    printf("%lf\n", count);

    asm volatile ("nop");
    asm volatile ("nop");
    asm volatile ("nop");

    latency = get_kpc_time();
    printf("%"PRIu64"\n", latency);

    exit(EXIT_SUCCESS);
}
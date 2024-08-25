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
    uint64_t count = 0;

    asm volatile ("nop");
    asm volatile ("nop");
    asm volatile ("nop");

    asm volatile("mov $0x0, %%rax" : : : "rax");
    asm volatile("mov $0x0, %%rdx" : : : "rdx");
    asm volatile("mov $0x1, %%rbx" : : : "rbx");

    for (i = 1; i <= x; i++) {
        asm volatile("idiv %%rbx" : : : "rax", "rdx", "rbx" );
        asm volatile("idiv %%rbx" : : : "rax", "rdx", "rbx" );
        asm volatile("idiv %%rbx" : : : "rax", "rdx", "rbx" );
        asm volatile("idiv %%rbx" : : : "rax", "rdx", "rbx" );
        asm volatile("idiv %%rbx" : : : "rax", "rdx", "rbx" );
        asm volatile("idiv %%rbx" : : : "rax", "rdx", "rbx" );
        asm volatile("idiv %%rbx" : : : "rax", "rdx", "rbx" );
        asm volatile("idiv %%rbx" : : : "rax", "rdx", "rbx" );

        asm volatile("idiv %%rbx" : : : "rax", "rdx", "rbx" );
        asm volatile("idiv %%rbx" : : : "rax", "rdx", "rbx" );
        asm volatile("idiv %%rbx" : : : "rax", "rdx", "rbx" );
        asm volatile("idiv %%rbx" : : : "rax", "rdx", "rbx" );
        asm volatile("idiv %%rbx" : : : "rax", "rdx", "rbx" );
        asm volatile("idiv %%rbx" : : : "rax", "rdx", "rbx" );
        asm volatile("idiv %%rbx" : : : "rax", "rdx", "rbx" );
        asm volatile("idiv %%rbx" : : : "rax", "rdx", "rbx" );

        asm volatile("idiv %%rbx" : : : "rax", "rdx", "rbx" );
        asm volatile("idiv %%rbx" : : : "rax", "rdx", "rbx" );
        asm volatile("idiv %%rbx" : : : "rax", "rdx", "rbx" );
        asm volatile("idiv %%rbx" : : : "rax", "rdx", "rbx" );
        asm volatile("idiv %%rbx" : : : "rax", "rdx", "rbx" );
        asm volatile("idiv %%rbx" : : : "rax", "rdx", "rbx" );
        asm volatile("idiv %%rbx" : : : "rax", "rdx", "rbx" );
        asm volatile("idiv %%rbx" : : : "rax", "rdx", "rbx" );

        asm volatile("idiv %%rbx" : : : "rax", "rdx", "rbx" );
        asm volatile("idiv %%rbx" : : : "rax", "rdx", "rbx" );
        asm volatile("idiv %%rbx" : : : "rax", "rdx", "rbx" );
        asm volatile("idiv %%rbx" : : : "rax", "rdx", "rbx" );
        asm volatile("idiv %%rbx" : : : "rax", "rdx", "rbx" );
        asm volatile("idiv %%rbx" : : : "rax", "rdx", "rbx" );
        asm volatile("idiv %%rbx" : : : "rax", "rdx", "rbx" );
        asm volatile("idiv %%rbx" : : : "rax", "rdx", "rbx" );
    }
    asm volatile ("nop");
    asm volatile ("nop");
    asm volatile ("nop");

    asm volatile("mov %%rbx, %0" : "=r"(count) : : "rbx");

    latency = get_kpc_time();
    printf("%"PRIu64"\n", latency);

    printf("%"PRIu64"\n", count);

    exit(EXIT_SUCCESS);
}
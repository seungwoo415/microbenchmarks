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
struct list {
    uint64_t value;
    char pad[56];
};
typedef struct list element;

// =============================================================================
int main (int argc, char *argv[]) {

    init_kpc(); 
    configure_kpc();
    uint64_t latency = 5;

    
    uint64_t size=0;
    uint64_t x=0;

    if(argc != 3) {
        printf("Please provide the number of repetitions and array size.\n");
        exit(EXIT_FAILURE);
    }

    x = string_to_binary(argv[1]);
    size = string_to_binary(argv[2]);

    if (size % 32 != 0) {
        printf("The array size needs to be divisible by 32 (due to unrolling).\n");
        exit(EXIT_FAILURE);
    }
    printf("Struct size %"PRIu64"\n", (uint64_t)sizeof(element));
    printf("Repetitions:%"PRIu64" Size:%"PRIu64"\n", x, size);
    printf("Memory to be accessed: %"PRIu64"KB\n", (uint64_t)(size*sizeof(element))/1024);

    uint64_t i = 0;
    uint64_t jump = 0;
    uint64_t print = 0;

    element *ptr_vector;
    ptr_vector = (element *)valloc(sizeof(element) * size);

    asm volatile ("nop");
    asm volatile ("nop");
    asm volatile ("nop");
    for (i = 0; i < x; i++) {
        for (jump = 0; jump <= size - 32; jump += 32) {
            ptr_vector[jump + 0].value = jump;
            ptr_vector[jump + 1].value = jump;
            ptr_vector[jump + 2].value = jump;
            ptr_vector[jump + 3].value = jump;
            ptr_vector[jump + 4].value = jump;
            ptr_vector[jump + 5].value = jump;
            ptr_vector[jump + 6].value = jump;
            ptr_vector[jump + 7].value = jump;

            ptr_vector[jump + 8].value = jump;
            ptr_vector[jump + 9].value = jump;
            ptr_vector[jump + 10].value = jump;
            ptr_vector[jump + 11].value = jump;
            ptr_vector[jump + 12].value = jump;
            ptr_vector[jump + 13].value = jump;
            ptr_vector[jump + 14].value = jump;
            ptr_vector[jump + 15].value = jump;

            ptr_vector[jump + 16].value = jump;
            ptr_vector[jump + 17].value = jump;
            ptr_vector[jump + 18].value = jump;
            ptr_vector[jump + 19].value = jump;
            ptr_vector[jump + 20].value = jump;
            ptr_vector[jump + 21].value = jump;
            ptr_vector[jump + 22].value = jump;
            ptr_vector[jump + 23].value = jump;

            ptr_vector[jump + 24].value = jump;
            ptr_vector[jump + 25].value = jump;
            ptr_vector[jump + 26].value = jump;
            ptr_vector[jump + 27].value = jump;
            ptr_vector[jump + 28].value = jump;
            ptr_vector[jump + 29].value = jump;
            ptr_vector[jump + 30].value = jump;
            ptr_vector[jump + 31].value = jump;
            // ~ asm volatile ("nop");
        }
        print += ptr_vector[0].value;
        ptr_vector[0].pad[0] = 0;
    }
    asm volatile ("nop");
    asm volatile ("nop");
    asm volatile ("nop");

    latency = get_kpc_time();
    printf("%"PRIu64"\n", latency);
    printf("%"PRIu64"\n", print);
    exit(EXIT_SUCCESS);
}
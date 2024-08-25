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
    struct list *next_element;
    char pad[48];
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

    uint64_t i = 0, j = 0;
    uint64_t print = 0;
    element *ptr_list = NULL;
    ptr_list = (element *)valloc(sizeof(element) * size);
    element *ptr_this;

    ptr_this = ptr_list;
    for (i = 0; i < size; i++) {
        ptr_this->value = 1;
        ptr_this->next_element = &ptr_list[i+1];
        ptr_this = ptr_this->next_element;
        ptr_this->next_element = NULL;
    }

    asm volatile ("nop");
    asm volatile ("nop");
    asm volatile ("nop");
    ptr_this = ptr_list;
    for (i = 0; i < x; i++) {
        ptr_this = ptr_list;
        for (j = 0; j <= size - 32; j += 32) {
            ptr_this = ptr_this->next_element;
            ptr_this = ptr_this->next_element;
            ptr_this = ptr_this->next_element;
            ptr_this = ptr_this->next_element;
            ptr_this = ptr_this->next_element;
            ptr_this = ptr_this->next_element;
            ptr_this = ptr_this->next_element;
            ptr_this = ptr_this->next_element;

            ptr_this = ptr_this->next_element;
            ptr_this = ptr_this->next_element;
            ptr_this = ptr_this->next_element;
            ptr_this = ptr_this->next_element;
            ptr_this = ptr_this->next_element;
            ptr_this = ptr_this->next_element;
            ptr_this = ptr_this->next_element;
            ptr_this = ptr_this->next_element;

            ptr_this = ptr_this->next_element;
            ptr_this = ptr_this->next_element;
            ptr_this = ptr_this->next_element;
            ptr_this = ptr_this->next_element;
            ptr_this = ptr_this->next_element;
            ptr_this = ptr_this->next_element;
            ptr_this = ptr_this->next_element;
            ptr_this = ptr_this->next_element;

            ptr_this = ptr_this->next_element;
            ptr_this = ptr_this->next_element;
            ptr_this = ptr_this->next_element;
            ptr_this = ptr_this->next_element;
            ptr_this = ptr_this->next_element;
            ptr_this = ptr_this->next_element;
            ptr_this = ptr_this->next_element;
            ptr_this = ptr_this->next_element;

            print = ptr_this->value;
        }
    }
    asm volatile ("nop");
    asm volatile ("nop");
    asm volatile ("nop");

    latency = get_kpc_time();
    printf("%"PRIu64"\n", latency);
    printf("%"PRIu64"\n", print);
    exit(EXIT_SUCCESS);
}
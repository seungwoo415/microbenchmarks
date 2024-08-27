#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>

#include "GoFetch/re/src/lib/eviction_set/sys_utils.h"

struct list {
    uint64_t value;
    struct list *next_element;
    char pad[48];
};
typedef struct list element;

int main (int argc, char *argv[]) {

    init_kpc(); 
    configure_kpc();
    uint64_t latency = 5;


    uint64_t size=32;
    uint64_t x=20;

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
// How memory internal work during a C program execution:
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> // For sbrk()

// Global variables (Data Section)
int global_var = 10;         // Initialized data section
static int static_var = 20;  // Static initialized data
int uninit_var;              // BSS section (uninitialized global)

void memory_test() {
    int local_var = 30;  // Stack section
    printf("Address of Local Variable (Stack): %p\n", (void*)&local_var);
}

int main() {
    int local_main = 40;  // Stack section
    char *heap_var = (char *)malloc(10 * sizeof(char)); // Heap allocation

    printf("\n===== Memory Section Addresses =====\n");
    
    // Text section (Code)
    printf("Address of main() (Text Section): %p\n", (void*)main);
    
    // Data section (Initialized variables)
    printf("Address of Initialized Global (Data): %p\n", (void*)&global_var);
    printf("Address of Static Variable (Data): %p\n", (void*)&static_var);
    
    // BSS section (Uninitialized variables)
    printf("Address of Uninitialized Global (BSS): %p\n", (void*)&uninit_var);
    
    // Heap section
    printf("Address of Heap Allocation (Heap): %p\n", (void*)heap_var);
    
    // Stack section
    printf("Address of Local Variable in main() (Stack): %p\n", (void*)&local_main);
    memory_test();


    free(heap_var); // Free allocated memory
    return 0;
}

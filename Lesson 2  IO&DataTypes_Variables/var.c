#include <stdio.h>

// Declaration of a global variable 'globalVar' (declaration)
extern int globalVar;

int main() {
    // Definition and initialization of local variables
    int localVar;       // Declaration and definition (memory allocation)
    localVar = 20;      // Initialization

    // Definition and initialization combined
    int anotherVar = 30; // Definition and initialization in one line

    // Output the initialized values
    printf("globalVar: %d\n", globalVar);
    printf("localVar: %d\n", localVar);
    printf("anotherVar: %d\n", anotherVar);

    return 0;
}

// Definition of the global variable 'globalVar' (definition)
int globalVar = 15;


/* In this program we are initialising and defining the globalvar variable after printing it's value but it thrown no error and prints value 15 */

/* During the Linking Phase:

1. **Combining Object Files:** The linker combines all object files and resolves the references to `globalvar`.

2. **Definition Resolution:** The definition of `int globalvar = 15;` is found, and the linker connects it to the `extern` declaration in the `main()` function.

3. **Result:**  
   - The program works correctly and uses the value `15` for `globalvar`. */
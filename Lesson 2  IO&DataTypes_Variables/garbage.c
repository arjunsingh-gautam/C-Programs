#include <stdio.h>
int main()
{
    int a;
    printf("value of a is: %d", a); // This will print a garbage since we have nothing to variable a
    return 0;
}

/*
 ### **Why Do Uninitialized Variables in C Contain Garbage Values?**

When you declare a variable in C without initializing it, it gets a **garbage value**. This happens because:

1. **Memory is Not Cleared Automatically:**  
   - In C, when a variable is declared, memory is allocated for it, but the content of that memory remains unchanged unless explicitly initialized.
   - The memory location may already contain leftover values from previous operations.

2. **Random Data from Memory:**  
   - Since C does not zero out memory automatically, an uninitialized variable may hold **whatever data** was previously stored at that memory address.

3. **Stack Memory Behavior (Local Variables):**  
   - Local (automatic) variables are stored in the **stack**, which is reused frequently.
   - A newly declared variable may get a memory location that was used by a different function or program, leading to unpredictable values.

4. **Heap and Global Memory Behavior:**  
   - **Global and static variables** (stored in the **BSS section**) are automatically initialized to **zero**.
   - **Heap memory** (allocated using `malloc`) contains garbage values unless `calloc` is used (which initializes memory to zero).

 */
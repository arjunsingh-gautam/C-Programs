#include<stdio.h>
extern int globalvar;
int main()
{
   int localvar;
   localvar=10;
   int anothervar=20;
   printf("globalvar=%d\nlocalvar=%d\nanothervar=%d\n",globalvar,localvar,anothervar);
   return 0;
}
int globalvar=15;

/* In this program we are initialising and defining the globalvar variable after printing it's value but it thrown no error and prints value 15 */

/* During the Linking Phase:

1. **Combining Object Files:** The linker combines all object files and resolves the references to `globalvar`.

2. **Definition Resolution:** The definition of `int globalvar = 15;` is found, and the linker connects it to the `extern` declaration in the `main()` function.

3. **Result:**  
   - The program works correctly and uses the value `15` for `globalvar`. */

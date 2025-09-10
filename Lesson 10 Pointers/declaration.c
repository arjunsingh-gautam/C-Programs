#include<stdio.h>
int main()
{
    int *j;// pointer declaration
    int x=5;
    j=&x; //initialisation
    printf("Program-1\n");
    printf("Value of x:%d\n",x);
    printf("Addres of x:%d\n",j);
    printf("Address of j:%d\n",&j);
    printf("Value referenced by j is %d",*j);
    printf("\n\n");
    
}

//Program-2
// int main()
// {
//     int *j;
//     int x=5;
//     *j=&x;//unexpected behavior
//     printf("Value of x:%d\n",x);
//     printf("Addres of x:%d\n",&x);
//     printf("Addres of x:%d\n",j);
//     printf("Address of j:%d\n",&j);
//     printf("Value referenced by j:%d",*j);
// }

//Program -3
// int main()
// {
//     int x=5;
//     int *j=&x;//declaration and initialisation
    
    
//     printf("Value of x:%d\n",x);
//     printf("Addres of x:%d\n",&x);
//     printf("Addres of x:%d\n",j);
//     printf("Address of j:%d\n",&j);
//     printf("Value referenced by j:%d",*j);
// }


// Explaination:
// - Program 1: Correctly initializes and uses the pointer j. No issues, prints all values and addresses as expected.

// - Program 2: Contains an error due to *j = &x;, which attempts to dereference an uninitialized pointer, leading to undefined behavior and potential segmentation fault.

// - Program 3: Correctly initializes the pointer j after declaring it, similar to Program 1, and works without any issues
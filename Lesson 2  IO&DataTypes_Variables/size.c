// C Program to print size of
// different data type in C
#include <stdio.h>

int main()
{
       int size_of_int = sizeof(int);
       int size_of_char = sizeof(char); // sizeof() is unary operator which take data type as argument and how much memory space in bytes the variable of this data type wil take
       int size_of_float = sizeof(float);
       int size_of_double = sizeof(double);
       int size_of_long = sizeof(long int);
       int size_of_long_long = sizeof(long long int);

       printf("The size of int data type : %d byte \n", size_of_int);
       printf("The size of char data type : %d byte \n", size_of_char);
       printf("The size of float data type : %d byte \n", size_of_float);
       printf("The size of double data type : %d byte \n", size_of_double);
       printf("The size of long int data type : %d byte \n", size_of_long);
       printf("The size of long long int data type : %d byte \n", size_of_long_long);

       return 0;
}
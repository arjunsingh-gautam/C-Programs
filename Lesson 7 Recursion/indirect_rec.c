// In this code we will understand indirect recursion and tail recursion
/*
Indirect Recursion: Type of recursion in which function A call B and B calls A indirectly or directly
Tail Recursion: Type of recursion in which recursive call is the last operation
*/
#include <stdio.h>
#include <stdbool.h>

// Function declarations (important for indirect recursion)
bool isEven(int n);
bool isOdd(int n);

// Definition of isEven
bool isEven(int n)
{
    if (n == 0)
        return true;     // Base case
    return isOdd(n - 1); // Indirect recursive call
}

// Definition of isOdd
bool isOdd(int n)
{
    if (n == 0)
        return false;     // Base case
    return isEven(n - 1); // Indirect recursive call and Tail recursion since recursive call is the last operation
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isEven(num))
        printf("%d is Even\n", num);
    else
        printf("%d is Odd\n", num);

    return 0;
}

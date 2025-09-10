#include <stdio.h>

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age < 18) {
        goto too_young;
    }

    printf("You are eligible to vote.\n");
    goto end;

too_young:
    printf("Sorry, you are not eligible to vote.\n");

// below sentence will be executed in normal control flow

/* y:  
    printf("My name is Arjun"); */

end:
    return 0;
}

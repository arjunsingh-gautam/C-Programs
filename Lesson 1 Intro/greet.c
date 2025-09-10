#include <stdio.h>

int main() {
    // This program greets the user and asks for their name
    // It then prints a personalized greeting message   
    printf("Hello, What is your name!\n");
    char name[50];
    scanf("%s", name);
    printf("Hello, %s! nice to meet you" , name);
    return 0;
}
// In this program we will learn how to set colors of text 
#include <stdio.h>

// Define color codes
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"

int main() {
    printf(RED "This is red text\n" RESET);
    printf(GREEN "This is green text\n" RESET);
    printf(YELLOW "This is yellow text\n" RESET);
    printf(BLUE "This is blue text\n" RESET);
    printf(MAGENTA "This is magenta text\n" RESET);
    printf(CYAN "This is cyan text\n" RESET);
    printf(WHITE "This is white text\n" RESET);

    return 0;
}

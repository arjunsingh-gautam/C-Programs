#include <stdio.h>
#include <string.h>  // For strcpy() function

// Global definition of struct Person
struct Person {
    char name[50];
    int age;
    float salary;
};

// Function prototype
void printPerson(struct Person p);

int main() {
    // Local definition of struct Address
    struct Address {
        char city[50];
        char street[50];
        int zipCode;
    };

    // Define and initialize a struct Person globally
    struct Person emp1 = {"John Doe", 30, 50000.0};

    // Define a struct Person locally
    struct Person emp2;

    // Initialize emp2 member by member
    strcpy(emp2.name, "Jane Smith");
    emp2.age = 25;
    emp2.salary = 60000.0;

    // Print information using the printPerson function
    printf("Employee 1:\n");
    printPerson(emp1);

    printf("\nEmployee 2:\n");
    printPerson(emp2);

    // Local usage of struct Address
    struct Address homeAddress;
    strcpy(homeAddress.city, "New York");
    strcpy(homeAddress.street, "Broadway");
    homeAddress.zipCode = 10001;

    printf("\nHome Address:\n");
    printf("City: %s\n", homeAddress.city);
    printf("Street: %s\n", homeAddress.street);
    printf("Zip Code: %d\n", homeAddress.zipCode);

    return 0;
}

// Function definition to print a struct Person
void printPerson(struct Person p) {
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
    printf("Salary: %.2f\n", p.salary);
}
 
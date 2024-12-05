/*
Write  a program to store the details of 3 employee from the user defined data.
Use the structure declared above
*/

#include <stdio.h>
#include <string.h>
struct employee
{
    int code;      // Employee's code (integer)
    float salary;  // Employee's salary (floating point number)
    char name[10]; // Employee's name (character array of length 10)
}; // Semicolon is important
int main()
{
    struct employee e1, e2, e3; // Declare three variables of type 'struct employee'

    // Input for the first employee (e1)
    printf("Enter the value of code\n");
    scanf("%d", &e1.code); // Read an integer and store it in e1.code

    printf("Enter the value of salary\n");
    scanf("%f", &e1.salary); // Read a float and store it in e1.salary

    printf("Enter the value of name\n");
    scanf("%s", e1.name); // Read a string and store it in e1.name

    // Display the details of the first employee (e1)
    printf("%d %f %s\n", e1.code, e1.salary, e1.name);

    printf("Enter the value of code\n");
    scanf("%d", &e2.code);

    printf("Enter the value of salary\n");
    scanf("%f", &e2.salary);

    printf("Enter the value of name\n");
    scanf("%s", &e2.name);
    printf("%d %f %s\n", e2.code, e2.salary, e2.name);

    printf("Enter the value of code\n");
    scanf("%d", &e3.code);

    printf("Enter the value of salary\n");
    scanf("%f", &e3.salary);

    printf("Enter the value of name\n");
    scanf("%s", &e3.name);
    printf("%d %f %s\n", e3.code, e3.salary, e3.name);

    return 0; // Indicate that the program ended successfully
}

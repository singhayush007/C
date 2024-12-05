#include <stdio.h>

struct employee
{
    int code; //    Thsi declare a new user defined data types!
    float salary;
    char name[10];
}; // semicolon is important

int main()
{
    struct employee facebook[100]; // Ana rray of structure
                                   // We can access the data using:

    facebook[0].code = 100;
    facebook[1].code = 77;
    struct employee harry = {100, 71.22, "harry"};
    printf("%d , %f , %s", harry.code, harry.salary, harry.name);
    return 0;
}
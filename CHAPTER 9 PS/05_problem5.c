/*
Write a program with a structure representing  complex number.
*/

#include <stdio.h>
typedef struct c
{
    int real;
    int imaginary;
} Complex;

int main()
{
    Complex c = {1, 2};
    printf("The value of complex number is %d + %di\n", c.real, c.imaginary);
    return 0;
}
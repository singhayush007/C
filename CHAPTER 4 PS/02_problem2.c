/*
Write a program to print multiplication table of 10 in reversed order.
*/


#include <stdio.h>

int main()
{
    int n = 10;
    scanf("%d\n", &n);
    for (int i = 10; i ; i--)
    {
        printf("%d X %d = %d\n", n, i, n * i);
    }
    return 0;
}
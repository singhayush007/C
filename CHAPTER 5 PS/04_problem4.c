/*
Write a program using recursion to calculate nth element of Fibonacci series.
*/

#include <stdio.h>
// 0,1,1,2,3,5,8,13,21,34,...
// fibonacci (n) = fibonacci (n-1) + fibonacci(n-2);

int fibonacci(int n);

int fibonacci(int n)
{
    if (n == 1 || n == 2)
    {
        return n - 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int fibonacci(int);

int main()
{
    int n = 5; // Change this value to get the nth Fibonacci number.

    printf("The value of fibonacci series is %d is %d\n", n, fibonacci(n));
    return 0;
}
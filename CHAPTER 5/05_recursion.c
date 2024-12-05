#include <stdio.h>

int factorial(int); // Function prototype
// Factorial(5) = 1x2x3x4x5
// Factorial(4) = 1x2x3x4
// Factorial(3) = 1x2x3
// Factorial(n) = 1x2x3x4x5 ... n-1 x n
// Factorial(n-1) = 1x2x3x4x5 ... n-1

int factorial(int n)
{
    if (n == 1 || n == 0) // Base Condition
    {
        return  1;
    }
    // Factorial(n-1) = 1x2x3x4x5 ... n-1
    return factorial(n - 1) * n;
}
int main()
{
    int a = 3;
    printf("The factorial of %d is %d\n", a, factorial(a));
    return 0;
}
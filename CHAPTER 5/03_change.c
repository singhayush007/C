#include <stdio.h>

int change(int a);
int chnage(int a)
{
    a = 77; // Misnomer
    return 0;
}
int main()
{
    int b = 22;
    chnage(b); // The value of b remians 22
    printf("b is %d\n", b);
    return 0;
}
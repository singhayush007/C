/*
Write  a program having a vaibale 'i' . Print the address of 'i'
pass this varibale to a function and print its address. Are these address same? Why?
*/

#include <stdio.h>

void  returning_5(int *ptr)
{
    printf("The value of ptr is %p\n", ptr);
    printf("The value at ptr is %d\n", *ptr);
}
int main()
{
    int i = 2;
    int *ptr = &i;
    printf("The address of i is %p\n", &i);
    returning_5(ptr);
    return 0;
}
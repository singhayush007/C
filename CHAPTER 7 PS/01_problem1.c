/*
Create an array of 10 numbers. Verify using pointers arithmentic that (ptr +2) points
to the third element where ptr is a pointer pointnig to the first element of the array.
*/


#include <stdio.h>

int main(){
    int a [] = {1,2,3,4,5,6,7,8,9,10};
    int *ptr = a;

    printf("The value at address %u is %d\n", ptr+2, *(ptr+2));
    return 0;
}
/*
Repeat 8 using while loop.
*/


#include <stdio.h>

int main(){
    int i = 1;
    int product = 1;
    int n = 4;
    while (i <= n)
    {
        product *= i;
        i ++;
    }
    printf("Tha factorilal is %d\n" , n ,product);
    return 0;
}
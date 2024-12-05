/*
Write a program to calculate the sum of numbers occuring in the multiplication table of 8. (Consider 8 X 1 to 8 x 10)
*/


#include <stdio.h>

int main(){
    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
       sum += (8 * i);
    }
    printf("The sum of the table of 8 is %d\n" , sum);
    return 0;
}
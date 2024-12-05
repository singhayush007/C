/*
Write a program to calculate simple interest for a set of values representing principal , numbers or year and rate of interest
*/

#include <stdio.h>

int main(){
    float p = 34;
    int r = 9;
    int t = 5;
    printf("The value of simple interest is %f\n" , (p*r*t)/100);
    return 0;
}
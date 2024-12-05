/*
Write a program to convert Celcius (Centigrade degress temperature to Fahrenheit)
*/

#include <stdio.h>

int main(){
    float c = 37.0 , f;
    f = ((9.0/5.0)*c) + 32;
    printf("The value in Fahrenheit is %f\n" , f);
    return 0;
}
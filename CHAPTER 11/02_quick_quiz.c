/*
Write a program to create a dynamic array of 5 floats using malloc().
*/

#include <stdio.h>
#include <stdlib.h>

float main()
{
    float n;
    float *ptr;
    ptr = (float *)malloc(n * sizeof(float));
    // float arr[n]; // Not allowed in c language
    ptr[0] = 3;
    ptr[1] = 61;
    ptr[2] = 6;
    ptr[3] = 56;
    ptr[4] = 66;
    printf("%.2f\n", ptr[0]);
    printf("%.2f\n", ptr[1]);
    printf("%.2f\n", ptr[2]);
    printf("%.2f\n", ptr[3]);
    printf("%.2f\n", ptr[4]);
    return 0;
}
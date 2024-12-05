/*
Write a function and pass the value by reference.
*/

#include <stdio.h>


// Function declaration
void double_value(int *);

// Function defenition 
void double_value(int*a){
    *a = *a * 2;
}
int main(){
    int x = 5; // Initial value of x
    printf("The value of x before doubling is %d\n", x); // Print initial value of x

    double_value(&x); // Call function to double the value of x 
    printf("The value of x after doublig is %d\n" , x); // Print the new value of x 
    return 0;
}
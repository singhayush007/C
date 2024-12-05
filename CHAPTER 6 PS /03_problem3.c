/*
Write a program to change the value of a  varibale to ten times of its vurrent value.
*/
void change_to_ten_times(int *);

void change_to_ten_times(int *a)
{
    *a = *a * 10;
}
#include <stdio.h>

int main()
{
    int x = 45; // Initial value of x 
    printf("The value of x is %d\n", x); // Print initial value of x 
    change_to_ten_times(&x); // Call function to change the value of x to ten times its current value
    
    printf("The value of x is %d\n", x); // Print the new value of x


    return 0;
}
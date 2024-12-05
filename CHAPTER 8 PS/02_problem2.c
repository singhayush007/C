/*
Write a program to take string as an input from the user %c and %s
confirm that the string are equal.
*/

#include <stdio.h>

int main() {
    char str[6];  // Declare a character array to hold 5 characters plus a null terminator
    for (int i = 0; i < 5; i++) {
        scanf("%c", &str[i]);  // Read a single character and store it in str[i]
        fflush(stdin);         // (Not recommended) Clear the input buffer
    }
    str[5] = '\0';  // Null-terminate the string

    printf("%s\n", str);  // Print the string

    return 0;
}

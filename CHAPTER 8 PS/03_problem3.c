/*
Write your own version of strlen function from <string.h>.
*/

#include <stdio.h>

// Custom strlen function to calculate the length of a string
int strlen(char str[]) {
    int i = 0, count;
    char c = str[i];  // Initialize c with the first character of the string
    while (c != '\0') {
        c = str[i];  // Update c with the current character
        i++;         // Increment the index
    }
    count = i - 1;   // Subtract 1 to get the correct length (because i was incremented after finding the null terminator)
    return count;    // Return the length
}

int main() {
    char str[] = "Harry bhai";  // Declare and initialize a string

    // Print the length of the string using the custom strlen function
    printf("%d\n", strlen(str));
    return 0;  // Return 0 indicating successful execution
}

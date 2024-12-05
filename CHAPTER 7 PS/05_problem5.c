/*
Write a program containing functions which reverse
the array passed to it.
*/

#include <stdio.h>

// Function to print the elements of an array
void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]); // Print each element followed by a space for readability
    }
    printf("\n"); // Print a newline character after printing all elements
}

// Function to reverse the elements of an array
void reverse(int arr[], int n)
{
    int temp;                       // Temporary variable for swapping
    for (int i = 0; i < n / 2; i++) // Iterate over the first half of the array
    {
        temp = arr[i];           // Store the current element in temp
        arr[i] = arr[n - i - 1]; // Replace current element with the corresponding element from the end
        arr[n - i - 1] = temp;   // Place the temp value in the corresponding position from the end
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6}; // Define and initialize the array
    printArray(arr, 6);             // Print the original array
    reverse(arr, 6);                // Reverse the array
    printArray(arr, 6);             // Print the reversed array
    return 0;                       // Return 0 to indicate successful completion
}

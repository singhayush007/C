/*
Write a program to determine whether a character entered by the user is lowercase or not
*/

#include <stdio.h>

int main()
{
    char ch = 'a';
    printf("The character is %c\n", ch);
    printf("Enter a character: ");
    scanf(" %c", &ch); // Note the space before %c to skip any leading whitespace
    // 97 , 122
    if (ch >= 97 && ch <= 122)
    {
        printf("This character is lowercase\n");
    }
    else
    {
        printf("This character is uppercase\n");
    }
    return 0;
}

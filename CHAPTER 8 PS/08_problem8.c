/*
Write  a program to count the occurence of a given character
in a string.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char c = 'r';
    int count = 0;
    char str[] = "Harry";
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == c)
        {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}
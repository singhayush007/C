/*
Write a program to read a text file character by character and write its content twice in separate file.
*/

#include <stdio.h>

int main()
{
    char ch;
    FILE *ptr;
    FILE *ptr2;

    ptr = fopen("harry.txt", "r");
    ptr2 = fopen("harry3.txt", "a");
    while (1)
    {
        ch = fgetc(ptr);
        // When all teh content of a file has been read break.
        if (ch == EOF)
        {
            break;
        }
        else
        {
            fprintf(ptr2, "%c", ch);
            fprintf(ptr2, "%c", ch);
            printf("%c\n", ch);
        }
    }
    return 0;
}
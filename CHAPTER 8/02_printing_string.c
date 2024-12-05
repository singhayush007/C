#include <stdio.h>

int main()
{
    // char st[] = { 'a' , 'b' , 'c' , '\0'};
    char st[] = "abc"; // Same as doing char str[] = {'a' , 'b', 'c'}
    // for (int i = 0; i < 3; i++)
    // {
    //    printf("%c\n", st[i]);
    // }
    printf("%s", st);
     return 0;
}
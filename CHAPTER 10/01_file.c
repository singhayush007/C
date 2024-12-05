#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("harry.txt", "r");
    int num;
    num = fscanf(ptr, "%d", &num);
    printf("The value of num is %d\n", num);
    return 0;
}
#include <stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("hary.txt", "r");
    char c = fgetc(ptr); // Used to read a character from file
    printf("%c\n" , c);
    // fputc('c' , ptr);
    return 0;
}
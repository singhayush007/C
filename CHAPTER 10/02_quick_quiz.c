/*
Modify the program above to check the whether the file exists or not before opening the file.
*/


#include <stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("harry.txt" , "r");
    
    if (ptr == NULL)
    {
        printf("The file does not exist sorry!\n");
    }
    else{
        int num;
        fscanf(ptr, "%d" , &num);
        printf("The value of num is %d\n" , num);

        fscanf(ptr , "%d" , &num);
        printf("The value of num is %d\n" , num); 

        fclose(ptr);
    }
    return 0;
}
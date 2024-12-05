#include <stdio.h>

int main(){
    int age = 65;

    if (age>60) {
        printf("You can drive and you are a senior citizen\n");
    }
    else if (age>18){
        printf("You can drive\n");
    }
    else if (age>40){
        printf("You can drive you are an elder\n");
    }
    else{
        printf("You cannot drive\n");
    }

    return 0;
}
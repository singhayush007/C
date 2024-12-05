/*
Calculate income tax paid by an employee to the government as per the slabs
mentioned below:

Income slab                Tax 

    2.5L - 5.0 L            5%
    5.0l - 10.0L            20%
    above 10.0L             30%

    Note that there is no tax below 2.5L. Take income ammount as an input from the user.
*/

#include <stdio.h>

int main(){
    int income;
    float tax =0; 
    printf("Enter income: \n");
    scanf("%d" , &income);
    if (income<=250000){
        tax = 0;
    }
    else if (income>250000 && income<500000){
        tax = 0.5 * (income - 250000);
    }
    else if (income>500000 && income<=100000){
        tax = 0.05* (500000 - 250000) + 0.2 * (1000000 - 500000);
    }
    else{
        tax = 0.05 * (500000 - 250000) + 0.2 *(1000000 - 500000)+ 0.3 * (income - 1000000);
    }
    printf("The total tax you need to pay is %.2f\n" , tax);
    return 0;
}




#include <stdio.h>
#include <stdbool.h>
int  main(){
    int age;
    double price;
    int isStudent;
    double dPrice;
    

    printf("Enter your age!\n");
    scanf("%d",&age);

    printf("Enter price of the ticket!\n");
    scanf("%lf",&price);
    dPrice=price*0.5;

    printf("Are you student?(If yes choose 1 if not choose 0)\n");
    scanf("%d",&isStudent);

    bool value = ((age<12)||(age>65))||(isStudent==1);
    if (value==1){
        printf("We applied discount to you!\n");
        printf("Your new price is %lf",dPrice);
    }
    else {
        printf("Your price is %lf",price);
    }

    return 0;
}

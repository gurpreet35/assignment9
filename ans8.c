/* Program to convert a positive number into a negative number and negative
number into a positive number using a switch statement. */
#include<stdio.h>
int main(){
    int choice, num,positive,negative;
    printf("Enter a Number:");
    scanf("%d",&num);
    printf("1.Change Positive to Negative Number\n");
    printf("2.Change Negative to Positive number\n");
    printf("Enter your Choice:");
    scanf("%d",&choice);
    if(num==0){
        choice=0;
    }
    switch (choice)
    {
    case 0:
    printf("'0'is neither positive nor negative!");
    case 1:
        if(num>0){
            num=-num;
            printf("%d",num);
        }
        break;
    case 2:
        if(num<0){
            num=~num+1;
            printf("%d",num);
        }

        break;
    }
}
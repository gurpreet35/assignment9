// Program to check whether a year is a leap year or not. Using switch statement
#include<stdio.h>
int main(){
    int year,temp,y;
    char flag;
    printf("Enter Year:");
    scanf("%d",&year);
    if(temp=year%100==0){
        flag='Y';
    }
    else
    flag='N';
    y=year/100;
    switch (flag)
    {
    case 'Y':
         if (y % 4 == 0)
        {
            printf("%d is a leap year", year);
        }
        else
        {
            printf("%d is not a leap year", year);
        }
        break;
    case 'N':
         if (year % 4 == 0)
        {
            printf("%d is a leap year", year);
        }
        else
        {
            printf("%d is not a leap year", year);
        }
        break;
    default:
        printf("Enter a valid choice!");
        break;

    }

}
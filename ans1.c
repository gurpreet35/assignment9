//Write a program which takes the month number as an input and display number of days in that month.
#include<stdio.h>
int main(){
    int num;
    printf("1.January\n");
    printf("2.February\n");
    printf("3.March\n");
    printf("4.April\n");
    printf("5.May\n");
    printf("6.June\n");
    printf("7.July\n");
    printf("8.August\n");
    printf("9.September\n");
    printf("10.October\n");
    printf("11.November\n");
    printf("12.December\n");
    printf("Choose the number with respect to month->\n");
    scanf("%d",&num);
    switch (num)
    {
    case 1:
        printf("\"%d\"th month contains 31 days",num);
        break;
     case 2:
        printf("28 days in a common year and 29 days in leap years");
        break;
     case 3:
        printf("\"%d\"th month contains 31 days",num);
        break; 
    case 4:
        printf("\"%d\"th month contains 30 days",num);
        break;
     case 5:
        printf("\"%d\"th month contains 31 days",num);
        break;   
    case 6:
        printf("\"%d\"th month contains 30 days",num);
        break;
     case 7:
        printf("\"%d\"th month contains 31 days",num);
        break;
    case 8:
        printf("\"%d\"th month contains 30 days",num);
        break;
     case 9:
        printf("\"%d\"th month contains 31 days",num);
        break;
    case 10:
        printf("\"%d\"th month contains 30 days",num);
        break;
    case 11:
        printf("\"%d\"th month contains 30 days",num);
        break;
     case 12:
        printf("\"%d\"th month contains 31 days",num);
        break;
    default:
        printf("Please Enter valid Number");
        break;
    }
        return 0;
    
}
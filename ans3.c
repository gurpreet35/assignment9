//Write a program which takes the day number of a week and displays a unique greeting message for the day
#include<stdio.h>
int main(){
    int num;
    printf("1.Monday\n");
    printf("2.Tuesday\n");
    printf("3.Wednesday\n");
    printf("4.Thrusday\n");
    printf("5.Friday\n");
    printf("6.Saturday\n");
    printf("7.Sunday\n");
    
    printf("Choose the number with respect to Days->\n");
    scanf("%d",&num);
    switch (num)
    {
    case 1:
        printf("I hope this wonderful Monday brings you hope and the courage you need to face the challenges in your life");
        break;
     case 2:
         printf("May the Tuesday remain the opportunity full day for you");
        break;
     case 3:
         printf("One small positive thought in the morning can change your whole day. Happy Wednesday!");
        break; 
    case 4:
        printf("May your day be blessed with joy and happiness as the sun shines its rays.");
        break;
     case 5:
        printf("it is the day like a cool breeze in life.");
        break;   
    case 6:
        printf("I wish you a blessed happy Saturday!");
        break;
     case 7:
        printf("Have fun, rest, enjoy yourself. ...");
        break;
    default:
        printf("Please Enter valid Number of a week");
        break;
    }
        return 0;
    
}
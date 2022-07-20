/* 
Write a menu driven program with the following options:
a. Addition
b. Subtraction
c. Multiplication
d. Division
e. Exit

 */
#include<stdio.h>
int main(){
    int a,b;
    char choice;
    printf("a. Addition\n");
    printf("b. Subtraction\n");
    printf("c. Multiplication\n");
    printf("d. Division\n");
    printf("e. Exit\n");
    printf("Enter your choice ->\n");
    scanf("%c",&choice);
    switch (choice)
    {
    
    case 'a':
    printf("Enter a first number->\n");
    scanf("%d",&a);
    printf("Enter a second number->\n");
    scanf("%d",&b);
    printf("Addition of a and b is:%d",a+b);
        break;
     case 'b':
    printf("Enter a first number->\n");
    scanf("%d",&a);
    printf("Enter a second number->\n");
    scanf("%d",&b);
    printf("Subtraction  of a and b is:%d",a-b);
        break;
     case 'c':
    printf("Enter a first number->\n");
    scanf("%d",&a);
    printf("Enter a second number->\n");
    scanf("%d",&b);
    printf("Multiplication of a and b is:%d",a*b);
        break; 
    case 'd':
    printf("Enter a first number->\n");
    scanf("%d",&a);
    printf("Enter a second number->\n");
    scanf("%d",&b);
    if(a>b)
    printf("Division of a and b is:%d",a/b);
    else
    printf("Division of b and a is:%d",b/a);

        break;
    default:
        printf("Please Enter valid choice");
        break;
    }
        return 0;
    
}
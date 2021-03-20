// Program to create a simple calculator
//Date of creation: 18-03-2021
//Author: Aryan Gupta
#include <stdio.h>//preprocessor directive for standard input output
int main() //int main means that are functon needs to return some integer value
{
    char operator;//variable declaration of character data type
    double n1, n2;//variable declaration of double data type
    printf("Enter an operator (+, -, *, /): ");//printf command to print the output
    scanf("%c", &operator);
    scanf("%lf %lf",&n1, &n2);//taking input from user 
    switch(operator)
    {
        case '+':
            printf("%.1lf + %.1lf = %.1lf",n1, n2, n1+n2);
            break; // this statement is correct syntaxt wise
        case '-':
            printf("%.1lf - %.1lf = %.1lf",n1, n2, n1-n2);
            break; // this statement is incorrect syntaxt wise
     
        case '*':
            printf("%.1lf * %.3lf = %.2lf",n1, n2, n1*n2);
        case '/':
            printf("%.1lf / %.1lf = %.1lf",n1, n2, n1/n2);
            break;
        // operator doesn't match any case constant +, -, *, /
        default:
            printf("Error! operator is not correct");
    }
 return 0;
}
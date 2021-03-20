//program to Calculate sum of digits of a number using while loop 
//Date of creation: 20-03-2021
//Author: Aryan Gupta
#include<stdio.h> //preprocessor directive for input and output 
int main()  ////int main means that functon needs to return some integer value
//main body of the code begins
{  
    int num, remainder, sum = 0;//integer variable declaration  
    printf("Enter a integer number\n");  
    scanf("%d", &num);  //taking input from user
    while(num > 0)  //while loop condition
    //from line 13 to 16 is the condition of code
    {  
        remainder = num % 10;  
        sum      = sum + remainder;
        num      = num / 10;  
    }  
  
    printf("Sum of digit = %d\n", sum);  //printing the sum of digits
    return 0; 
}  
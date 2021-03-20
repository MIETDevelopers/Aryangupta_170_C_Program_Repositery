//Program to Check if a number is prime or not using while loop
//Date of creation: 19-03-2021
//Author: Aryan Gupta
#include<stdio.h>  //preprocessor directive for standard input output 
int main()  //int main means that are functon needs to return some integer value
{  
    int num, i = 1, factor = 0; //integer variable declaration
    printf("Enter a number: ");//printing statement to enter a number 
    scanf("%d", &num);  //taking input from user
    while(i <= num)//condition for while loop  
    {  
        if(num%i == 0)  //condition to check prime
         
            factor++;//if above condition become true then value of factor increases
            i++;  //increament in the value of i
    }  
  
    if(factor==2) printf("%d is prime number\n", num);//if number is prime then print this statement  
    else     printf("%d is not prime number\n", num);  //if number is not prime then print this statement  
  
    return 0;  
}   
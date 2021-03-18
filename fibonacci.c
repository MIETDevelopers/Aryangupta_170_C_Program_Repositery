//program for Fibonacci sequence using for loop
//Date of creation: 18-03-2021
//Author: Aryan Gupta
#include<stdio.h>  //preprocessor directive for standard input output
  
int main()  //int main means that are functon needs to return some integer value
{  
    int n1 = 0, n2 = 1, n3, i, num;  //integer variable declaration
  
    printf("Enter the number of terms to be printed\n");  
    scanf("%d", &num);  //taking input from user
  
    printf("\n%d\n%d\n", n1, n2);  //printing the value of n1 and n2
  
    for(i = 3; i <= num; i++)  //not able to understand the condition
    {  
        n3 = n1 + n2;  
        printf("%d\n", n3);  
  
        n1 = n2;  
        n2 = n3;  
    }  
  
    return 0;  
}  
//program to Check no. is armstrong or not using while loop
//Date of creation: 20-03-2021
//Author: Aryan Gupta
#include <stdio.h>  //preprocessor directive for input and output 
int main()//int main means that functon needs to return some integer value
{
    int temp, r, sum=0, num;//integer variable declaration 
    printf("please enter a number: ");//printing statement to enter number
    scanf("%d", &num);//tahing input from the user
    temp=num;//to avoid the lost of original value we copied the value of num to a temporary variable
    while(temp!=0)//condition for while loop
    //code for the while loop
    {
        r=temp%10;
        sum=sum+(r*r*r);
        temp=temp/10;   
    }
    if (sum==num)//if statement condition
    
        printf("%d is an Armstrong no.",num);//printing answer if an armstrong no.
    else
        printf("%d is not an Armstrong",num);//printing answer if not an armstrong no.
    return 0;
}
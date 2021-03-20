//program for finding factorial using for loop
//Date of creation: 18-03-2021
//Author: Aryan Gupta
#include<stdio.h>//preprocessor directive for standard input output
int main()//int main means that are functon needs to return some integer value
{
	int n, fact=1, i;//integer variable declaration
	scanf("%d",&n);//taking input from the user
	for (int i=n;i>=1;i--)//condition for for loop
	{	
		fact=fact*i;//task to find factorial
	}
	printf("Factorial=%d",fact);//printing factorial of the number
	return 0;//success
}

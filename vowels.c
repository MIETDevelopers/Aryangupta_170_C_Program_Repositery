//program to Check whether the alphabet is a vowel or consonant
//Date of creation: 18-03-2021
//Author: Aryan Gupta
#include <stdio.h>//preprocessor directive for standard input output
int main()//int main means that are functon needs to return some integer value
{
	char ch;//character variable declaration
	printf("Enter a character: ");
	scanf("%c", &ch);//read input from the user

	if(ch=='a' || ch=='e' ||ch=='i' || ch=='o' || ch=='u' ||
		ch=='A' || ch=='E' ||ch=='I' || ch=='O' || ch=='U')//condition for if statement 
	{	
		printf("%c is vowel\n", ch);//printing entered alphabet is vowel
	}
	else
	{
			printf("%c is consonant\n", ch);//printing entered alphabet is consonant
	}
	return 0;
}
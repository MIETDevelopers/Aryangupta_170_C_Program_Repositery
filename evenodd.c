//program for number is even or odd
//Date of creation: 18-03-2021
//Author: Aryan Gupta
#include <stdio.h>//preprocessor directive for standard input output
int main(){//int main means that are functon needs to return some integer value
	int number;// integeer variable declaration
	scanf("\n%d", &number);//read number input by user

	if (number%2==0)//if or else statement to check whether number is even or odd
	printf("\nNumber is even");//printing number is even 
	 else  
		printf("Number is odd");//printing number odd
	return 0;// success
}

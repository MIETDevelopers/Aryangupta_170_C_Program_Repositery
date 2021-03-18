//program to Find Euclidean distance between two points in a plane
//Date of creation: 18-03-2021
//Author: Aryan Gupta
#include <stdio.h>//preprocessor directive for standard input output
#include<math.h>// this header file declares a set of functions to perform mathematical operations
int main()//int main means that are functon needs to return some integer value
{
	float x1, y1, x2, y2, distance;//variable declaration of float data type
	printf("Enter point 1 (x1,y1)\n");//printing for taking input to enter point 1
	scanf("%f %f", &x1, &y1);//taking input from user
	printf("Enter point 2 (x2,y2)\n");//printing for taking input to enter point 2
	scanf("%f %f", &x2, &y2);//taking input from user
	distance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));//formula for distane between two point
	printf("Distance=%f",distance);//printing the answer
	return 0;
}
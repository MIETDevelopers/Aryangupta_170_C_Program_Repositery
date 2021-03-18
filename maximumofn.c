//program to find Maximum of n numbers using for loop
//Date of creation: 18-03-2021
//copied from https://technotip.com/7585/c-program-to-find-biggest-of-n-numbers-without-using-arrays-using-for-loop/
#include<stdio.h>  //preprocessor directive for standard input output
  
int main()  //int main means that are functon needs to return some integer value
{  
    int limit, num, count, big;  //integer variable declaration
  
    printf("Enter the limit\n");  //printing statement
    scanf("%d", &limit);  //taking input from user
  
    printf("Enter %d numbers\n", limit);  //printing the output
    for(count = 1; count <= limit; count++)  //doubt in condition in for loop from 14-20
    {  
        scanf("%d", &num);  
  
        if(num > big || count == 1)  
        {  
            big = num;  
        }  
    }  
  
    printf("Biggest number is %d\n", big);  // printing the answer
  
    return 0;  
}  
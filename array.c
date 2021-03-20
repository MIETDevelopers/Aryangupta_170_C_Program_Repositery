//copied this program from google doubt in whole program
// C program to find maximum in arr[] of size n 
#include <stdio.h>//preprocessor directive for input and output 
 
// C function to find maximum in arr[] of size n
int largest(int arr[], int n)//function declaration
//function body begins
{
    int i;//variable declaration
    
    // Initialize maximum element
    int max = arr[0];
 
    // Traverse array elements from second and
    // compare every element with current max  
    for (i = 1; i < n; i++)//for loop condition
        if (arr[i] > max)
            max = arr[i];
 
    return max;
}int main()
//main body begins
{
    int arr[] = {10, 324, 45, 90,};//declaring array
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Largest in given array is %d", largest(arr, n));
    return 0;
}

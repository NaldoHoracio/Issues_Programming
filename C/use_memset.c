// C program to demonstrate working of memset() 
#include <stdio.h> 
#include <string.h> 
  
void printArray(char arr[], int n) 
{ 
   for (int i=0; i<n; i++) 
      printf("%d - %c\n", i, arr[i]); 
} 
  
int main() 
{ 
    int n = 10; 
    char arr[n]; 
  
    // Fill whole array with 100. 
    memset(arr, '0', n); 
    printf("Array after memset()\n"); 
    printArray(arr, n); 
  
    return 0; 
} 
// C++ program for implementation of Bubble sort 
#include <bits/stdc++.h>
using namespace std;
  
void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
  
// A function to implement bubble sort 
void bubbleSort(int arr[], int n) 
{ 
    int i, j; 
    for (i = 0; i < n-1; i++)     
      
    // Last i elements are already in place 
    for (j = 0; j < n-i-1; j++) 
        if (arr[j] > arr[j+1]) 
            swap(&arr[j], &arr[j+1]); 
} 
  
/* Function to print an array */
void printArray(int arr[], int size) 
{ 
    int i; 
    for (i = 0; i < size; i++) 
        cout << arr[i] <<endl; 
    cout << endl; 
} 
  
// Driver code 
int main() 
{ 
    int n=10;
   // cin>>n;
    int arr[n]={3,43,5467,234,75,213,4523,435,97,43}; 
  //  for(int i=0;i<n;i++)cin>>arr[i];
    bubbleSort(arr, n);  
    printArray(arr, n); 
    return 0; 
} 
  
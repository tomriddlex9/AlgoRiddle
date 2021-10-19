#include <bits/stdc++.h>

using namespace std;
int getInvCount(int arr[], int n)
{
    int inv_count = 0;
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[i] > arr[j])
                inv_count++;
 
    return inv_count;
}
 
// Driver Code
int main()
{
    srand(time(0));
    int arrSize=10; 
    int arr[arrSize];
    cout<<"Random number "<<rand()<<"\n";
    for(int i{0};i<arrSize;i++) arr[i]=rand()%100;
    cout<<"Our array is : \n";
    for(int i{0};i<arrSize;i++) cout<<arr[i]<<"  "; 
    cout<<"\n";
    cout << " Number of inversions are "
         << getInvCount(arr, arrSize);
    return 0;
}
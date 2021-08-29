#include <bits/stdc++.h>
using namespace std;

int CountKDigitNumber(int arr[],int n,int k)
{
    int count=0; 
    for(int i=0;i<n;i++)
    {
        int size;
        do{
            arr[i]/=10; 
            ++size; 
        }while(arr[i]!=0);
        if(size==k) count++;
    }
    return count;
}
int main()
{
    int arr[5]={34,545,65,9,423};
    int n=5; 
    int k=2;
    cout<<CountKDigitNumber(arr,n,k);
	return 0;
}

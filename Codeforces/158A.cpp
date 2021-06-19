#include<bits/stdc++.h>
using namespace std; 
int main(int argc, char const *argv[])
{
    int n,k;
    cin>>n>>k; //input for parameters 
    int array[n]; 
    for(int i=0;i<n;i++) cin>>array[i];//array input 
    int thresh=array[k-1],count=0;//put the value at position K as threshold and init counter to 0 
    for(int i=0;i<n;i++){
        if(array[i]&&array[i]>=thresh)count++;//check if passes the threshold , then increment counter 
    }
    cout<<count; //output
    return 0;
}

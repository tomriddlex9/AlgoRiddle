#include<iostream>
using namespace std; 
int main(int argc, char const *argv[])
{
    int n,x; 
    int pos=0;
    cin>>n>>x; 
    int arr[n];
    bool found=false;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]<x && i>pos)pos=i; 
        else if(arr[i]==x){pos=i;found=true;break;}
    }
    if(found) cout<<pos;
    else cout<<pos+1; 
    return 0;
}

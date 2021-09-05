#include<iostream>
using namespace std; 
int main()
{ 
    int n; 
    int groups{0};
    cin>>n;
    int a[n]; 
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n-1;i++)
    {
        int prev=a[i];
        int next=a[i+1];
        if(prev%10==next/10) groups++ ;
    }
    cout<<groups+1; 
    return 0;
}
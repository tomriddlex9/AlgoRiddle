#include <bits/stdc++.h> 
using namespace std; 
void solution()
{
    int n{},max{0}; 
    cin>>n; 
    int a[n],b[n],s[n];
    for(int i{0};i<n;i++)cin>>a[i];
    for(int i{0};i<n;i++)
    {
        cin>>b[i];
        s[i]=(20*a[i])-(10*b[i]);
    } 
    for(int i{0};i<n;i++)
    {
       if(s[i]>max) max=s[i]; 
    }
    cout<<max<<"\n"; 
}
int main()
{
    int tc; 
    cin>>tc; 
    while(tc--)
    {
        solution(); 
    }
    return 0;
}
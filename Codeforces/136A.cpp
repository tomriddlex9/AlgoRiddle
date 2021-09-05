#include<iostream>
using namespace std; 
int main(int argc, char const *argv[])
{
    int n; 
    cin>>n; 
    int array[n]; 
    for(int i=1;i<=n;i++)cin>>array[i];
    int gifts[n]={0};
    for(int i=1;i<=n;i++)
    {
        gifts[array[i]]=i;
    }
    for(int i=1;i<=n;i++)cout<<gifts[i]<<" ";
    return 0;
}

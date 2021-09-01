#include<iostream>
using namespace std; 
int main(int argc, char const *argv[])
{
    int k,n,w; 
    cin>>k>>n>>w; 
    int sum=0;
    for (int i = 1; i <= w; i++)sum+=(i*k);
    n>sum?cout<<0:cout<<sum-n;
    return 0;
}

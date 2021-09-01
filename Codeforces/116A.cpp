#include<iostream>
using namespace std; 
int main(int argc, char const *argv[])
{
    int n;
    int sitting=0; 
    cin>>n; 
    int maxSitting{0};
    int a{0},b{0};
    while(n--)
    {
     cin>>a>>b; 
     sitting-=a; 
     sitting+=b; 
     if(sitting>maxSitting)maxSitting=sitting;  
    }
    cout<<maxSitting;
    return 0;
}

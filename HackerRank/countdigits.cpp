#include<bits/stdc++.h>
using namespace std; 
int main()
{
    string S; 
    cin>>S;
    long long number=stoi(S);
    int array[10]={};
    while(number)
    {
        int temp=number %10; 
        array[temp]++; 
        number/=10;
    }
    for(int i=0;i<10;i++)
    {
        cout<<i<<" "<<array[i]<<endl;
    }
    return 0; 
    
}
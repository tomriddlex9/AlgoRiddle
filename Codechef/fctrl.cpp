#include<iostream>
using namespace std;
int fact(int x)
{
    if(x==0||x==1)return 1;
    int ans=1;
    for(int i=1;i<=x;i++)ans*=i;
    return ans;
}
int main()
{
    int tc; 
    cin>>tc; 
    while(tc--)
    {
        int a;
        cin>>a; 
        cout<<fact(a)<<endl;
    }
}
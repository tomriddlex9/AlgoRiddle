#include<bits/stdc++.h> 
using namespace std; 

int main()
{
    ios::sync_with_stdio(false);//for faster IO with cin and cout 
    cin.tie(nullptr);
    int n,m;
    cin>>n; 
    int signalOne[n];
    for(int i=0;i<n;i++)cin>>signalOne[i];
    cin>>m; 
    int signalTwo[m];
    for(int i=0;i<m;i++)cin>>signalTwo[i];
    int shorter; 
    m>n?shorter=n:shorter=m; 
    int maxEqual{0},updateCounter{0};
    for(int i=0;i<shorter;i++)
    {
        if(signalOne[i]==signalTwo[i]&&signalOne[i]>maxEqual)
        {
            maxEqual=signalOne[i];
            updateCounter++; 
        }
    }
    cout<<updateCounter<<endl; 
    return 0;
}
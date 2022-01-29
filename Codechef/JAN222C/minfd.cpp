#include<bits/stdc++.h>
using namespace std;
int solve()
{
   int n,x; 
   cin>>n>>x; 
   int f[n];
   int total{0},counter{-1}; 
   for(int i=0;i<n;i++) cin>>f[i];
   sort(f,f+n,greater<int>()); 
   for(int i=0;i<n;i++)
   {
       total+=f[i]; 
       if(total>=x)
       {
           counter=(i+1); 
           break;
       }
   }
  //  for(int i=0;i<n;i++) cout<<f[i]<<" ";
  //  cout<<endl;
   return counter;
}
int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
int tt{3};  
cin>>tt; 
while(tt--)
{
    cout<<solve()<<endl;
} 
return 0;
}
#include<bits/stdc++.h>
using namespace std;
void solve()
{
   int n,temp;
   cin>>n;
   int counter[n]{0};  
   for(int i=0;i<n;i++)
   { 
       cin>>temp;
       if(temp<=n)
       {
           counter[temp-1]++; 
       }
       else
       {
           while(temp>n || counter[temp-1]<1)
           {
               temp/=2; 
           }
           counter[temp-1]++; 
       }
   }
   for(int x:counter)
   {
       if(x!=1){
           cout<<"NO"<<endl; 
           return; 
       }
   }
   cout<<"YES"<<endl;
}
int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
int tt{3};  
cin>>tt; 
while(tt--) solve();
return 0;
}
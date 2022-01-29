#include<bits/stdc++.h>
using namespace std;
void solve()
{
   int n,maximum{0},minimum{INT_MAX},temp;
   cin>>n; 
   for (int i=0;i<n;i++)
   {
       cin>>temp; 
       maximum=max(maximum,temp);
       minimum=min(minimum,temp);
   }
   //cout<<maximum<<" "<<minimum<<endl;
   cout<<maximum-minimum<<endl; 
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
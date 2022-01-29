#include<bits/stdc++.h>
using namespace std;
void solve()
{
   int x,y,z; 
   cin>>x>>y>>z; 
   cout<<x*(z-y)<<endl;
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
#include<bits/stdc++.h>
using namespace std;
void solve()
{
   int n;
   cin>>n; 
   int b1[3],b2[3],b3[3];
   for(int i=0;i<3;i++) cin>>b1[i];
   for(int i=0;i<3;i++) cin>>b2[i];
   for(int i=0;i<3;i++) cin>>b3[i];
   int r{n-b1[0]};
   int b{n-b2[1]};
   int g{n-b3[2]};
   cout<<max(max(r,b),g)<<endl;
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
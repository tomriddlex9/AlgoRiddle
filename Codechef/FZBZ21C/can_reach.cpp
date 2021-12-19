#include<bits/stdc++.h>
using namespace std;
void solve()
{
   int x,y,k;
   cin>>x>>y>>k ; 
   // YES or NO 
   x=abs(x);
   y=abs(y);
   if(x%k==0 && y%k==0) cout<<"YES";
   else cout<<"NO";
}
int main()
{
ios::sync_with_stdio(false);//for faster IO with cin and cout 
cin.tie(nullptr);
int tt{3}; //testcases 
cin>>tt; //input the test cases
for(int i=0;i<tt;i++){solve();cout<<endl;}//solve for each testcase
return 0;
}
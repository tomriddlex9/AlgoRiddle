#include<bits/stdc++.h>
using namespace std;
void solve()
{
   int n,k; 
   cin>>n>>k; 
   if(k==0 || n%k!=0 )cout<<"-1";
   else cout<<(n/k);
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
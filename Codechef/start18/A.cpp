#include<bits/stdc++.h>
using namespace std;
void solve()
{
   int n,k,days{0}; 
   cin>>n>>k; 
   days=n/k;
   n%=k; 
   if(n>0)cout<<days+1; 
   else cout<<days;
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
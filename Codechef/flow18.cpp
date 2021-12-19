#include<bits/stdc++.h>
using namespace std;
void solve()
{
   int n,fact=1; 
   cin>>n;
   for(int i=2;i<=n;i++) fact*=i;  
   cout<<fact;
}
int main()
{
ios::sync_with_stdio(false);//for faster IO with cin and cout 
cin.tie(nullptr);
int tt; //testcases 
cin>>tt; //input the test cases
for(int i=0;i<tt;i++){solve();cout<<endl;}//solve for each testcase
return 0;
}
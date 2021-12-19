#include<bits/stdc++.h>
using namespace std;
void solve()
{
   int n; 
   cin>>n; 
   if(n==1) cout<<"1";
   if(n%2==0) cout<<"1 1 "<<n-2;
   else if(n%2!=0) cout<<"1"<<n-1;
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
#include <bits/stdc++.h> 
 using namespace std; 
void solve()
{
  int x,k; 
  cin>>x>>k; 
  int min{2*x},max{((x*k)*((x*k)-1))};
  cout<<min<<" "<<max; 
}
int main()
{
ios::sync_with_stdio(false);//for faster IO with cin and cout 
cin.tie(nullptr);
int tt; //testcases 
cin>>tt; //input the test cases 
for(int i{0};i<tt;i++){solve();cout<<endl;}//solve for each testcase
}
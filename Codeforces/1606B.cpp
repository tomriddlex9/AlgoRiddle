#include <bits/stdc++.h> 
 using namespace std; 
void solve()
{
  long long int n{1},k,c{1},hr{0},i{1}; 
  cin>>n>>k;
  if(k==0) { cout<<hr; return; }
  while(i<n) // untill all computers have the upgrade 
  {
      i+=c; 
      if(c<k) c++; // increase only untill all patch cables are used 
      hr++; 
  }
  cout<<hr;
}
int main()
{
ios::sync_with_stdio(false);//for faster IO with cin and cout 
cin.tie(nullptr);
int tt; //testcases 
cin>>tt; //input the test cases 
for(int i{0};i<tt;i++){solve();cout<<endl;}//solve for each testcase
}
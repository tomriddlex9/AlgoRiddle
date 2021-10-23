#include <bits/stdc++.h> 
 using namespace std; 
void solve()
{
  int x,y,counter{0}; 
  cin>>x>>y ; 
  while(x!=y)
  {
      counter++;
      if(x<y) x+=2; 
      else x-=1; 
  }
  cout<<counter;
//write the code solution here 
}
int main()
{
ios::sync_with_stdio(false);//for faster IO with cin and cout 
cin.tie(nullptr);
int tt; //testcases 
cin>>tt; //input the test cases 
for(int i{0};i<tt;i++){solve();cout<<endl;}//solve for each testcase
}
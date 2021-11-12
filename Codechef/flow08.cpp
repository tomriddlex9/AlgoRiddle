#include <bits/stdc++.h> 
 using namespace std; 
int fact (int n)
{
    if(n==1 || n==0) return 1; 
    else return n*fact(n-1);
}
void solve()
{
  int n; 
  cin>>n;
  cout<<fact(n);
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
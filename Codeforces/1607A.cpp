#include <bits/stdc++.h> 
 using namespace std; 
void solve()
{
  int totalTime{0};
  string word; 
  cin>>word; 
  for(int i{0};i<word.size()-1;i++)
  {
    totalTime=abs((word[i+1]-'a')-(word[i]-'a'));  
  }
  cout<<totalTime; 

//write the code solution here 
}
int main()
{
ios::sync_with_stdio(false);//for faster IO with cin and cout 
cin.tie(nullptr);
cout<<int('b'-'a');
int tt; //testcases 
cin>>tt; //input the test cases 
for(int i{0};i<tt;i++){solve();cout<<endl;}//solve for each testcase
}
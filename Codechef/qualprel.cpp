#include <iostream> 
#include <vector> 
#include <algorithm>
 using namespace std; 
void solve()
{ 
  int n{},k{},temp{},distinct{1},position{0};// variables for number of teams and position
  cin>>n>>k; // input values
  vector<int> s; // vector for storing scores 
  for(int i{0};i<n;i++) // taking input and storing scores in the vector 
  {
     cin>>temp; 
     s.push_back(temp);   
  }
  // sorting the vector values in decreasing order 
  sort(s.begin(),s.end(),greater<int>());
//   cout<<"array elements are:";
//   for(auto x:s)
//   {
//       cout<<x<<" ";
//   }
  for(int i{1};i<n;i++)
  {
      if(s[i]!=s[i-1]) distinct++; 
      if(distinct==k) 
      {
          cout<<i+1<<" ";
          return; 
      }
      
  }
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
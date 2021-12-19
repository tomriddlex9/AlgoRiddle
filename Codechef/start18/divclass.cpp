#include<bits/stdc++.h>
using namespace std;
void solve()
{
   int n,distinct{1};
   cin>>n; 
   int arr[n];
   if(n<12)
   {
       cout<<"no";
       return;
   } 
   for(int i=0;i<n;i++) cin>>arr[i];
   set<int>S;
   for(int i=0;i<n;i++) S.insert(arr[i]);
   distinct=S.size();
   if(distinct<12) cout<<"yes";
   else if(distinct>12) cout<<"no";

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
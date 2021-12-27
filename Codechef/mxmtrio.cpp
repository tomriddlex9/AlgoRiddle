#include<bits/stdc++.h>
using namespace std;
void solve()
{
   int n; 
   cin>>n; 
   int arr[n];
   for(int i{0};i<n;i++) cin>>arr[i];
   sort(arr,arr+n);
   long ans=(long)(arr[n-1]-arr[0]) * arr[n-2];
   cout<<ans; 
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
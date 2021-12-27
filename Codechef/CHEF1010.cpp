#include<bits/stdc++.h>
using namespace std;
void solve()
{
   int n,cZero{0},cOne{0},pairs{0}; 
   cin>>n; 
   string binString;
   cin>>binString;
   for(int i{0};i<n;i++){
       (binString[i]=='0')? ++cZero : ++cOne; 
   }

   pairs=min((cZero),(cOne)); 
   if((pairs-1)>0)  cout<<pairs-1;
   else cout<<0;  
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
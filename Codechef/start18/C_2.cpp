#include<bits/stdc++.h>
using namespace std;
void solve()
{
   int n,counter{0},index{0};
   string a,b;
   cin>>n>>a>>b;
   for(int i=n;i>=1;i--)
   {
       if(a[i]<b[i]) index=i;  
   }
    
   cout<<counter; 
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
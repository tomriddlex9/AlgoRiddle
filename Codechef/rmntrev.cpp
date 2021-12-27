#include<bits/stdc++.h>
using namespace std;
void reverseString(string &s,int x)
{
    for(int i=1;i<=x;i++){
        s[i]=s[x-i];
    }
}
void solve()
{
   int n,k;
   cin>> n >> k ;  
   string s;
   cin>>s; 
   for(int i=k;i>0;i++){
       reverseString(s,i);
   }
   
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
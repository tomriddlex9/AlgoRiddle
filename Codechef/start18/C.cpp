#include<bits/stdc++.h>
using namespace std;
int checksmall(string a,string b, int index)
{
    int temp;
    for(int j{index};j<n;j++)
      {
            if(a[j]<b[j])
            {
                temp++;
                return  
            } 
            if(a[j]>b[j]) break;
      }  
}
void solve()
{
   int n,counter{0};
   string a,b;  
   cin>>n; 
   cin>>a;
   cin>>b;
   for(int i{0};i<n;i++)
   {
       int j=i;
       counter+=checksmall(a,b,)
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
#include<bits/stdc++.h>
using namespace std;
void solve()
{
   int col[4],counter{};
   for(int i=0;i<4;i++)
   {
       cin>>col[i];
   }
   sort(col,col+3);
   for(int i=0;i<4;i++)
   {
          if(col[i]==col[i+1]) counter++; 
     
   }
   cout<<counter; 
}
int main()
{
ios::sync_with_stdio(false);//for faster IO with cin and cout 
cin.tie(nullptr);
solve();
return 0;
}
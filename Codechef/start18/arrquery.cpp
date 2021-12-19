#include<bits/stdc++.h>
using namespace std;
void solve()
{
   int n,q,r,l,x;
   cin>>n>>q; 
   int v[n];
   for(int i=1;i<=n;i++) cin>>v[i];
   while(q--)
   {
       cin>>l>>r>>x ;
       int count{0};
       for(int i=l;i<=r;i++)
       {
           if(v[i]>x||v[i]==x) count++; 
       }
       cout<<count<<"\n"; 
   }
}
int main()
{
ios::sync_with_stdio(false);//for faster IO with cin and cout 
cin.tie(nullptr);
solve(); 
return 0;
}
#include<bits/stdc++.h>
using namespace std;
void solve()
{
   int n; 
   cin>>n;
   int pfract[n];
   float ans; 
   for(int i{0};i<n;i++) {
       cin>>pfract[i];
       ans+=pfract[i];
   }
   cout<<ans/n;

}
int main()
{
ios::sync_with_stdio(false);//for faster IO with cin and cout 
cin.tie(nullptr);
solve(); 
return 0;
}
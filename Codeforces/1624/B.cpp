#include<bits/stdc++.h>
using namespace std;
bool checkAP(int a,int b,int c)
{
   int aM{(a+c)/2};
   // if already ap , then print YES 
   if(aM == 2*b) return true; 
   // if b is less than supposed 
   // b < aM 
   if((b<aM) && (aM%b==0)) {return true;}   
   // if a or c is less than 2b 
   // the arithmetic mean is less, then  either of a or c is smaller 
   if(aM<b)

}
void solve()
{
   int a,b,c; 
   cin>>a>>b>>c; 
   if(checkAP) cout<<"YES"<<endl; 
   else cout<<"NO";
}
int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
int tt{3};  
cin>>tt; 
while(tt--) solve();
return 0;
}
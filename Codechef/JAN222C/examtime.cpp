#include<bits/stdc++.h>
using namespace std;
void solve()
{
   int d[3]{0};
   int s[3]{0};
   int dTotal{0},sTotal{0};
   for(int i=0;i<3;i++) 
   {
       cin>>d[i];
       dTotal+=d[i];
   }
   for(int i=0;i<3;i++)
   {
       cin>>s[i];
       sTotal+=s[i];
   }

// totals are different 
   if(dTotal>sTotal) { cout<<"Dragon";return;}
   if(sTotal>dTotal) { cout<<"Sloth";return;}
   // totals are same
   if(dTotal==sTotal)
   {
       // total same but DSA different 
       if(d[0]>s[0]) { cout<<"Dragon";return;}
       if(s[0]>d[0]) { cout<<"Sloth";return;}
       // total and DSA same 
       if(d[0]==s[0])
       {    
           // total and DSA same but TOC different 
        if(d[1]>s[1]) { cout<<"Dragon";return;}
        if(s[1]>d[1]) { cout<<"Sloth";return;}
         // total and DSA and TOC same
        else cout<<"Tie";
       }
   }
   if(d[0]==s[0] && d[1]==s[1] && d[2]==s[1]) 
   {
       cout<<"Tie"; 
       return;
   }
   
}
int main()
{
ios::sync_with_stdio(false);
cin.tie(nullptr);
int tt{3};  
cin>>tt; 
while(tt--) 
{
    solve();
    cout<<endl; 
} 
return 0;
}
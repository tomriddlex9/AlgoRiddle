#include<bits/stdc++.h>
using namespace std;
bool checkPrime(vector<int> sa){
    
}
void solve()
{
   string bin;
   vector<int>sa;
   int temp{0};  
   cin>>bin; 
   for(int i=0;i<bin.length();i++){
       temp=bin[i];
       sa.push_back(temp);
       if(temp==1) {
           if(checkPrime(sa)) {
               cout<<"Yes";
               return; 
           }
       }
   }
   cout<<"No"; 
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
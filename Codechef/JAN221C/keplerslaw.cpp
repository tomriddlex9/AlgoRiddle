#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int ta,tb,ra,rb;
    cin>>ta>>tb>>ra>>rb; 
    double ka = pow(ta,2) / pow(ra,3);
    double kb = pow(tb,2) / pow(rb,3);
    if(abs(ka-kb)<1e-9) cout<<"Yes" ; 
    else cout<<"No";

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
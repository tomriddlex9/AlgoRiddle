#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,min{0},max{0}; 
    cin>>n;
    int array[n];
    for(int i{0};i<n;i++) cin>>array[i];
    min=(*min_element(array,array+n));
    max=(*max_element(array,array+n));
    cout<<max-min; 
    
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
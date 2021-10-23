#include <iostream>  
 using namespace std; 
void solve()
{
    int n,maxLead{0};
    bool aWin{false};
    cin>>n; 
    int a[n],b[n];
    for(int i{0};i<n;i++)
    {
        cin>>a[i]>>b[i];
        if(a[i]>b[i]&& a[i]-b[i]>maxLead)
        {
            maxLead=a[i]-b[i];
            aWin=true; 
        }
        else if(b[i]>a[i] && b[i]-a[i]>maxLead)
        {
            maxLead=b[i]-a[i];
            aWin=false; 
        }
    }
    aWin?cout<<"1 "<<maxLead<<"\n" : cout<<"2 "<<maxLead<<"\n";  
}
int main()
{
ios::sync_with_stdio(false);//for faster IO with cin and cout 
cin.tie(nullptr);
solve(); 
}
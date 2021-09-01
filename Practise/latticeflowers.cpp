#include<bits/stdc++.h>
using namespace std; 
int main(int argc, char const *argv[])
{
    int tc; 
    cin>>tc;
    while(tc--){
        int m,n; 
        cin>>m>>n; 
        if(m==n)
        { cout<<m<<" "<<3<<endl;}
        else if(m!=n)
        {
          cout<<max(m,n)<<" "<<1<<endl;
        }
        
    }
    return 0;
}

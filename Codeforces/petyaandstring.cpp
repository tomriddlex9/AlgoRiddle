#include<bits/stdc++.h>
using namespace std; 
int main(int argc, char const *argv[])
{
    string a,b; 
    cin>>a>>b; 
    for(int i=0;i<a.size();i++) a[i]=tolower(a[i]);
    for(int i=0;i<b.size();i++) b[i]=tolower(b[i]);
    //random checks to check the ascii values and else
    //cout<<a<<"  "<<b<<endl;
    //cout<<int('A')<<" "<<int('a')<<endl;
    if(a<b) cout<<-1; 
    else if(a==b) cout<<0; 
    else if(a>b) cout<<1; 
    return 0;
}

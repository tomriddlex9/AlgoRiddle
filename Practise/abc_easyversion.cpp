#include<bits/stdc++.h>
using namespace std; 
int highestofthree(int a,int b,int c)
{
    if(a>b&&a>c) return a; 
    if(b>a&&b>c) return b ; 
    else return c ; 
        
    }
}
int main(int argc, char const *argv[])
{
    int n; 
    cin>>n; 
    string computer; 
    getline(cin,computer); 
    int a_count{0},b_count{0},c_count{0};
    for(int i=0;i<computer.length();i++)
    {
        if(computer[i]='A') a_count++; 
        else if(computer[i]='B') b_count++; 
        else if(computer[i]='C') c_count++; 
    }
    
    
    return 0;
}

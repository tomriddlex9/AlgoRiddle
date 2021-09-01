#include<bits/stdc++.h>
using namespace std; 
int main(int argc, char const *argv[])
{
    string name;
    int countDistinct{0}; 
    cin>>name; 
    sort(name.begin(),name.end());
    for(int i=0;i<name.length();i++)
    {
        if(name[i]!=name[i+1]) countDistinct++;
    }
    if(countDistinct%2==0) cout<<"CHAT WITH HER!"; 
    else cout<<"IGNORE HIM!"; 
    return 0;
}

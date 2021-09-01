#include<iostream>
#include<string>
using namespace std; 
int main()
{
    string a,b; 
    cin>>a>>b;
    //if the words are of unequal lengths they are  not same; 
    bool same=1;
    if(a.length()!=b.length()) same=0;
    else 
    {
        for(int i=0;i<a.length();i++)
        {
           if(a[i]!=b[(a.length()-i-1)]) 
           {same=0;break;}
        }
    } 
    //same?cout<<"YES":cout<<"NO";
    if(same)cout<<"YES";
    else cout<<"NO";
    return 0; 
}
#include<bits/stdc++.h>
using namespace std;
bool CircleExists(int a,int b,int c)
{
    int last=(max(a,b)-min(a,b));
    int max=last*2;
    if(a>max||b>max||c>max) return false;
    else return true; 
}
int circle(int a,int b,int c)
{
    int diff=abs(a-b);
    if(!CircleExists(a,b,c))return -1;
    if(c>diff) return(c-diff); 
    else return(c+diff);

    
}
int main(int argc, char const *argv[])
{
    int tc,a,b,c; 
    cin>>tc; 
    while(tc--)
    {
        cin>>a>>b>>c;
        cout<<circle(a,b,c)<<endl; 
    }
    /* code */
    return 0;
}

#include<bits/stdc++.h>
using namespace std ;
int main(int argc, char const *argv[])
{
    int x,y,count{0};
    cin>>x>>y; 
    while(x>y)
    {
        if(x==y*x) count++; 
    }
    return 0;
}

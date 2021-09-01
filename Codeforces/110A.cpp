#include<bits/stdc++.h>
using namespace std; 
int main(int argc, char const *argv[])
{
    long long number; 
    scanf("%lld",&number);
    long long temp=number; 
    int luckCounter{0}; 
    while(temp)
    {
        int tempVar=temp%10; 
        if(tempVar==4||tempVar==7) luckCounter++; 
        temp/=10; 
    }
    if(luckCounter==7||luckCounter==4) cout<<"YES";
    else cout<<"NO";
    return 0;
}

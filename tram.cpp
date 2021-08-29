#include<bits/stdc++.h>
using namespace std; 
int main(int argc, char const *argv[])
{
    int n,max{0}; 
    cin>>n;
    int a,b;
    int seating=0;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b; 
        seating-=a; 
        seating=seating+b;
        if(seating>max) swap(seating,max);
        cout<<seating<<" "<<max<<endl;
    } 
      cout<<max<<endl;
    
    return 0;
}

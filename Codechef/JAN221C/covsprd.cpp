#include <iostream> 
#include <cmath> 
using namespace std; 
int solve(){
    int n,d; 
    int spread=0; 
    cin>>n>>d; 
    if(d==0 || n==0) return 0; 
    if(d<=10) return ( min (int(pow(2,d)),n));
    if(d>10){
        d-=10; 
        spread=1024; // pow(2,10) 
        while(d-- && spread <=n ){
            spread*=3; 
        }
    }
    return min(spread,n); 
}
int main(){
    int t; 
    cin>>t; 
    while(t--)
    {
        cout<<solve()<< endl; 
    }
}
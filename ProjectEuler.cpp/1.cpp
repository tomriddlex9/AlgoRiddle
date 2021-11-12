#include <iostream> 
using namespace std; 
int main()
{
    long long sum{0};
    for(int three{3};three<1000;three+=3) sum+=three;
    cout<<sum<<"\n";  
    for(int five{5};five<1000;five+=5) sum+=five; 
    cout<<sum<<"\n";
    for(int fifteen{15};fifteen<1000;fifteen+=15) sum-=fifteen; 
    cout<<sum<<"\n";
}
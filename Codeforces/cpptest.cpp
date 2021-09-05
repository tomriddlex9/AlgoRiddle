#include<iostream>
#include<ctime>
using namespace std; 
int main(int argc, char const *argv[])
{
    clock_t tstart=clock(); 
    long long int sum{0}; 
    for(long long int i=0;i<100000000;i++) sum+=i; 
    cout<<sum<<endl; 
    cout<<"--------------time taken to complete computation-------- : \n"; 
    cout<<(double)(clock()-tstart)/CLOCKS_PER_SEC<<"\n";
    return 0;
}

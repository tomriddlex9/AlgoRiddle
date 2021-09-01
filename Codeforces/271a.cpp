// the problem 271A is Beautiful Years 
// to solve this we need to keep incrementing the years from the given year 
// and check if the digits of the 4 digit year are unique or not 
#include<iostream>
using namespace std; 
int main(int argc, char const *argv[])
{
    int y; 
    cin>>y; 
    //since given in the question that solution exists , so we use an infinite loop
    //untill the solution is found 
    while(true)
    {
        y++; 
        int TH=y/1000; 
        int H=y/100%10;
        int T=y/10%10; 
        int O=y%10; 
        if(TH!=H && TH!=T && TH!=O && H!=T && H!=O && T!=O ) break; 
    }
    cout<<y;
    return 0;
}

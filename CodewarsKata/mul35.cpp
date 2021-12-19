
#include<iostream>
#include<sstream>
#include<cstdlib>
using namespace std;
int sumAP(int a,int n,int d )
{
    int temp = (2*a) + ((n-1)*d);
    int ans=((n/2)*temp); 
    return (ans);
}
int solution(int number)
{
    int sthree=sumAP(0,(number/3)+1,3);
    cout<<sthree<<endl; 
    int sfive=sumAP(0,(number/5)+1,5);
    cout<<sfive<<endl;
    int sfifteen=sumAP(0,(number/15)+1,15);
    cout<<sfifteen<<endl; 
    return ((sthree+sfive)-sfifteen);    
}
int main()
{
    int number; 
    cin>>number; 
    cout<<solution(number);
   return 0;
}
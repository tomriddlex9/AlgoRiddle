#include<iostream>
using namespace std; 
int main(int argc, char const *argv[])
{
    int distance ; 
    cin>>distance; 
    (distance%5==0)?cout<<(distance/5):cout<<(distance/5)+1;
    return 0;
}

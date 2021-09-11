#include<iostream>
using namespace std; 
int main()
{ 
 int n; 
 cin>>n; 
 int counter=0;
 while(n--)
 {
   int a,b; 
   cin>>a>>b; 
   if(abs(b-a)>=2) counter++; 
 }   
 cout<<counter;
}
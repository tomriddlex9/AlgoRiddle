#include<bits/stdc++.h>
using namespace std; 
void fizzBuzz()
{
     int count3{0},count5{0};
     for(int i=1;i<100;i++)
     {
         count3++;
         count5++; 
         string d="";
         {
             if(count3==3){d+="fizz";count3=0;}
             if(count5==5){d+="buzz";count5=0;}
             if(d=="") {cout<<i<<endl; }
             else {cout<<d<<endl;}
         }
     }
}
int main()
{
   fizzBuzz();
    return 0;
}

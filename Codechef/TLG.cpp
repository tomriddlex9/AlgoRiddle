#include<iostream>
#include<sstream>
#include<cstdlib>
using namespace std;
int main()
{
   int n,lead{0},highlead{0};
   int winner{0},sump1{0},sump2{0};  
   cin>>n;
   while(n--){
       int p1,p2; 
       cin>>p1>>p2;
       sump1+=p1; 
       sump2+=p2;  
       lead=sump1-sump2; 
       if(abs(lead)>highlead && lead >0)
       {
           highlead=abs(lead);
           winner=0; 
       } 
       else if(abs(lead)>highlead && lead<0)
       {
           highlead=abs(lead);
           winner=1; 
       }
   }
   cout<<winner+1<<" "<<highlead; 

   return 0;
}
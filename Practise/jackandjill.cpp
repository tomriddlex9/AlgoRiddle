#include <iostream>
using namespace std;
int playTheGame(int array[],int n){
   int i;
   int count=0;
   int max=array[0];
   int pos=0;
   for(i=0;i<n;i++)
      if(array[i]==0)
         count++;
      if(count==n)
         return 0;
         count=0;
      for(i=0;i<n;i++){
         if(array[i]%2==1){
            array[i]=array[i]-1;
            count++;
      }
      if(array[i]>=max){
         max=array[i];
         pos=i;
      }
   }
   while(array[pos]!=1){
      for(i=0;i<n;i++){
         if(array[i]%2==1){
             array[i]=array[i]-1;
            count++;
      }
      array[i]=array[i]/2;
   }
   count++;
}
while(array[pos]!=0){
   for(i=0;i<n;i++){
      if(array[i]!=0){
         array[i]=array[i]-1;
         count++;}
      }
   }
   return count;
}
int main(){
   int target[]={2,3};
   cout<<playTheGame(target,2);
   return 0;
}
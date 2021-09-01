#include<bits/stdc++.h>
using namespace std; 
int playlist(int songs[])
{
    int n=sizeof(songs)/sizeof(songs[0]);
    int c=0;
for( int i =0 ;i < n-1; i++)
{
  for(int j=i+1;j<n; j++)
  {
    if( (songs[i] + songs [j]) % 60 ==0) c++;
   else if(songs[i] %60 ==0 ) c++;
   else if(songs[j] %60==0) c++;
   else continue;
  }
}
   return c;
}
int main(int argc, char const *argv[])
{
    int n=3; 
    int songs[]={60,60,60};
    cout<<playlist(songs)<<endl; 
    /* code */
    return 0;
}

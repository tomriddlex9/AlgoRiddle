#include<bits/stdc++.h>
using namespace std; 
int countDistinct(long int n)
{
    vector<int> numvec; 
    while(n)
    {
        numvec.push_back(n%10);   
        n/10; 
    }
     int res = 1;
    for (int i = 1; i < numvec.size(); i++) {
        int j = 0;
        for (j = 0; j < i; j++)
            if (numvec[i] == numvec[j]) break;
        if (i == j)
            res++;
    }
    return res;
}
long int beautiful(long int n,int k)
{
  for(int i=n;i<10e7;i++)
  {
       if(countDistinct(i)<=k) return i; 
  }  
  return -1;
}
int main(int argc, char const *argv[])
{
    int tc; 
    cin>>tc; 
    while(tc--)
    {
        int k;
        long int n; 
        cout<<beautiful(n,k);
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std; 
void findMaxMedian(int n,int k, vector<int> array)
{
    sort(array.begin(),array.end()); 
    int maxMedian;
    int maxMedianPos;
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<array[i]<<" ";
    // }
    if(k%2==0)
    {
      maxMedianPos=floor(((n-k)+(n-1)/2 ) );
      maxMedian=array[maxMedianPos];  
    }
    if(k%2!=0)
    {
        maxMedianPos=((n-k)+(n-1)/2);
        maxMedian=array[maxMedianPos];
    }
    cout<<maxMedian;
    for(int i=n-k;i<n;i++) cout<<array[i]<<" "<<endl;
    
}
int main(int argc, char const *argv[])
{
    int tc ; 
    int n,k; 
    vector<int> array;
    cin>>tc; 
    while(tc--)
    {
      cin>>n>>k; 
      for(int i=0;i<n;i++) 
      {
          int temp;
          cin>>temp;
          array.push_back(temp);
      }
      findMaxMedian(n,k,array); 
    }
    return 0;
}

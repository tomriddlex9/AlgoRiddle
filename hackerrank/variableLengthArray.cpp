#include<iostream> 
#include<vector> 
using namespace std; 
int main()
{
    int n,q; 
    int sizes[n]; 
    int k; 
    vector<vector<int>> variableArray;
    cin>>n>>q; 
    for(int i=0;i<n;i++)
    {
        cin>>k; 
        for(int j=0;j<k;j++)
        {
            int temp;
            cin>>temp; 
            variableArray[i][j].pushback(temp);
        }
    } 
          
}
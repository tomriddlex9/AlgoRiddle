#include <bits/stdc++.h> 
using namespace std;
int valFinder(vector<int> array,int pos)
{
    return array[pos];
}
int main() {
    int n,q; 
    cin>>n>>q;
    vector<int> arrays[n];
    for(int i=0;i<n;i++)  
    {
        int vecsize;
        cin>>vecsize; 
        for(int j=0;j<vecsize;j++)
        {
            int temp; 
            cin>>temp; 
            arrays[i].push_back(temp);
        }    
    }
    for(int i{0};i<q;i++)
    {
        int vec,pos; 
        cin>>vec>>pos;
        cout<<valFinder(arrays[vec],pos)<<"\n" ;
    }
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
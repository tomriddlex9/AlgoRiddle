#include<bits/stdc++.h>
using namespace std; 
int main()
{ 
    int n; 
    cin>>n; 
    vector<int> students; 
    for(int i=1;i<=n;i++)
    {
        int temp; 
        cin>>temp; 
        students.push_back(temp);
    }
    sort(students.begin(),students.end());
    for(int i=1;i<=n;i++)if(i%2!=0)cout<<students[i]<<" ";
    for(int i=1;i<=n;i++)if(i%2==0)cout<<students[i]<<" ";
    return 0 ;
}

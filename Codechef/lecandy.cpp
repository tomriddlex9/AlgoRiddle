#include <iostream>
using namespace std;
bool solution(int array[],int n,int c)
{
    int sum{0}; 
    for(int i{0};i<n;i++)
    {
        sum=sum+array[i];
    }
    if(sum<=c) return true; 
    return false; 
    
}
int main()
{
    int n{0},c{0},tc{};
    cin>>tc; 
    while(tc--)
    {
     cin>>n>>c; 
     int array[n];
     for(int i=0;i<n;i++)cin>>array[i];
     if(solution(array,n,c))cout<<"Yes\n";
     else cout<<"No\n";
    } 
	return 0;
}
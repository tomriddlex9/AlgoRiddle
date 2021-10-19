#include<iostream>
using namespace std; 
void solution()
{
    int a{0},b{0},c{0}; 
    cin>>a>>b>>c; 
    if(a==0&&b==0&&c==0)cout<<"1 1 1\n";
    if(a>b && a>c)cout<<"0"<<" "<<a-b+1<<" "<<a-c+1<<"\n";
    if(b>a && b>c)cout<<b-a+1<<" "<<"0"<<" "<<b-c+1<<"\n";
    if(c>a && c>b)cout<<c-a+1<<" "<<c-b+1<<" "<<"0"<<"\n";
    
}
int main(int argc, char const *argv[])
{
    int tc{}; 
    cin>>tc; 
    while(tc--) {solution();} 
    return 0;
}

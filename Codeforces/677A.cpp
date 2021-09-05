#include<iostream> 
using namespace std;
int main(int argc, char const *argv[])
{
    int n,h; 
    cin>>n>>h; 
    int counter=0;
    int array[n];
    for(int i=0;i<n;i++) 
    {
        cin>>array[i];
        if(array[i]>h) counter+=2; 
        else counter++; 
    } 
    cout<<counter;
    

    return 0;
}

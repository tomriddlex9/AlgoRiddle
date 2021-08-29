#include<iostream> 
using namespace std; 
int main(int argc, char const *argv[])
{
    int tc; 
    cin>>tc; 
    int series[1000];
    int counter=0; 
    for(int i=1;counter<=1000;i++)
    {
        if(i%10==3||i%3==0) continue; 
        else 
        {
             series[counter]=i; 
             counter++; 
        }
    }
    while(tc--)
    {
        int position;
        cin>>position; 
        cout<<series[position-1]<<endl; 
    }

    return 0;
}

#include<iostream>
using namespace std; 
int main(int argc, char const *argv[])
{
    int tc; 
    cin>>tc;
    while(tc--)
    {
        bool a[3]={};
        bool b[3]={};
        int a_counter=0; 
        int b_counter=0;
        for(int i=0;i<3;i++)
        {
            cin>>a[i];
            if(a[i]) a_counter++; 
        }
        for(int i=0;i<3;i++)
        {
            cin>>b[i];
            if(b[i]) b_counter++;
        }
        if(a_counter==b_counter) cout<<"Pass\n";
        else cout<<"Fail\n"; 
    }
    return 0;
}

#include<iostream>
#include<string>
using namespace std; 
bool checkValid(int n,char firstrow[])
{
    int count=0;
    for(int i=0;i<n;i++) if(firstrow[i]=='L'|| firstrow[i]=='R') count++;
    if(count%2==0) return true; 
    else return false; 
}
 void secondRow(int n,char firstrow[])
 {
    char secondrow[n];
    for(int i=0;i<n;i++)
        { 
            if(firstrow[i]=='L'||firstrow[i]=='R')
            { 
                secondrow[i]='L';
                secondrow[i+1]='R';
                i+=1;
            }
            else if(firstrow[i]=='U') secondrow[i]='D';
            else if(firstrow[i]=='D') secondrow[i]='U';
        }
        for(int i=0;i<n;i++)cout<<secondrow[i];
        cout<<"\n"; 
        
 }
int main(int argc, char const *argv[])
{
    int tc; 
    cin>>tc; 
    while (tc--)
    {
        int n;
        cin>>n;
        char firstrow[n]; 
        for(int i=0;i<n;i++)cin>>firstrow[i];
        if(checkValid)secondRow(n,firstrow);
    }
    return 0;
}

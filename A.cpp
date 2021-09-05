#include<bits/stdc++.h>
using namespace std; 
void secondRow(int n,char firstrow[])
{
    char second[n];
    for(int i=1;i<=n;i++)i%2==0?second[i]='R':second[i]='L';
    for(int i=1;i<n;i++)
    {
        if(firstrow[i]=='U') second[i]='D';
        else if(firstrow[i]=='D') second[i]='U';
    }
    printf("%s",second);
}
int main(int argc, char const *argv[])
{
    int tc; 
    scanf("%d",&tc);
    while (tc--)
    {
        int n;
        scanf("%d,&n");
        char firstrow[n];
        for(int i=0;i<n;i++)scanf("%c",firstrow[i]);
        secondRow(n,firstrow);
    return 0;
}

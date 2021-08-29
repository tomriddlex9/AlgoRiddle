#include<bits/stdc++.h>
using namespace std;
int checkpos(int matrix[5][5])
{for(int i=0;i<5;i++){for(int j=0;j<5;j++){if(matrix[i][j]==1){return(abs(i-2)+abs(j-2));}}}}
int main(int argc, char const *argv[])
{
    int matrix[5][5];
    for(int i=0;i<5;i++){for(int j=0;j<5;j++){cin>>matrix[i][j];}}
    int answer=checkpos(matrix);
    cout<<answer;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int leastmarks(int marks[],int n)
{
    int least=marks[0];
    for(int i=0;i<n;i++) 
    {
        if(least>marks[i]) 
                {
                    least=marks[i];
                }
    }
    return least;
} 
bool check_whole(float n)
{
    if(float(n)==int(n)) return true;
    else return false; 

}
int main(int argc, char const *argv[])
{
    int n; 
    cin>>n ;
    int marks[n]; 
    float total=0;
    for(int i=0;i<n;i++)
    {
        cin>>marks[i];
        total+=marks[i];
    }
    float hack_total=total-leastmarks(marks,n);
    float average=total/n;
    float hack_average= hack_total/(n-1);
    hack_average=floor(hack_average*10)/10;
    // cout<<"\nleast:"<<leastmarks(marks,n);
    // cout<<"\ntotal:"<<total; 
    // cout<<"\nhack_total:"<<hack_total; 
    // cout<<"\naverage:"<<average; 
    printf("%.1f",hack_average);
    return 0;
}

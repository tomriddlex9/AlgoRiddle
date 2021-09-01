#include<iostream>
#include<string>
using namespace std; 
int main(int argc, char const *argv[])
{
    int n; 
    cin>>n; 
    //counter flags for Anton and Danik
    int A_counter{0},D_counter{0};
    char game[n];
    for(int i=0;i<n;i++) 
    {
        cin>>game[i];
        if(game[i]=='A') A_counter++;
        else if(game[i]=='D') D_counter++; 
    }
    if(A_counter>D_counter) cout<<"Anton";
    else if(D_counter>A_counter) cout<<"Danik";
    else cout<<"Friendship";
    return 0;
}

#include<bits/stdc++.h>
using namespace std ;
int main(int argc, char const *argv[])
{
    string input; 
    getline(cin,input);
    vector<char> numbers; 
    int count=0; 
    for(int i=0;i<input.length();i++)
    {
        if(input[i]!='+')
        {
            numbers.push_back(input[i]);
            count++;
        }
    }
        sort(numbers.begin(),numbers.end());
        for (int i = 0; i < count; i++)
        {
            if(i==count-1) cout<<numbers[i]<<endl;
            else cout<<numbers[i]<< "+";
            /* code */
        }
        
    return 0;
}

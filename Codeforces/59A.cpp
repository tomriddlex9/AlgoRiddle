#include<bits/stdc++.h>
using namespace std; 
void printUpper(string words)
{
    for (int i = 0; i < words.length(); i++)
    {
        words[i]=toupper(words[i]);
    }
    cout<<words; 
}
void printLower(string words)
{
    for (int i = 0; i < words.length(); i++)
    {
        words[i]=tolower(words[i]);
    }
    cout<<words; 
}
int main(int argc, char const *argv[])
{
    string words; //input string
    cin>>words; 
    //counters for upper and lower 
    int upper{0},lower{0};
    for(int i=0;i<words.length();i++)
    { 
        if(int(words[i])<97) upper++; 
        else if(int(words[i]>=97)) lower++;
    }
    if(upper>lower)printUpper(words);
    else printLower(words); 
    return 0;
}

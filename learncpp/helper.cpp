// program to find the number of occurences of lowercase letters
// from a to z in a given string and then print the occurence of each 
// using a vector 
#include<iostream>
#include<sstream>
#include<cstdlib>
#include<vector>
using namespace std;
vector<int> counterFunc(string s){
    vector<int> counter; 
    counter.assign(26,0);
    for(int i=0;i<s.length();i++){
         counter[s[i]-'a']++;
    }
    return counter; 
}
int main()
{
   //main code goes here
   string input="abbcdbb";
    vector <int> solution = counterFunc(input);
    for(auto x: solution ){
        cout<<x<<" "; 
    }
    cout<<endl; 
   return 0;
}
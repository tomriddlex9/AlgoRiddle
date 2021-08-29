#include<bits/stdc++.h>
using namespace std; 
int count_unique_char(char *str){
    int hash[128]={0};
    int counter{0};
    for(int i=0;i<strlen(str);i++) hash[str[i]]=1;
    for(int i=0;i<26;i++)counter+=hash[i];
    return counter; 
}
int main(int argc, char const *argv[])
{
    char name[101]; 
    int distinct[128]={0};
    for(int i=0;i<101;i++)
    // for(int i=0;i<name.length();i++)
    // {
    //    distinct[name[i]]=1;
    // }
    // char word='a';
    // printf("%d",int(word));
    // printf("\n%d",int('z'));
    cout<<count_unique_char(name)<<endl;

    return 0;
}

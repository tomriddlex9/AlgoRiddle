#include <iostream>
using namespace std;
int main() {
   char str[100];
   cin>>str;
   int i = 0, alphabet[26] = {0}, j;
   int bigAlphabet[26]={0};
   while (str[i] != '\0') {
      if (str[i] >= 'a' && str[i] <= 'z') {
         j = str[i] - 'a';
         ++alphabet[j];
      }
      else if (str[i] >= 'A' && str[i] <= 'Z') {
         j = str[i] - 'A';
         ++bigAlphabet[j];
      }
      ++i;
   }
   int count=0;
   for(int i=0;i<26;i++)
   {
       if(alphabet[i]==1)
       {
           count++;
           
       }
       else if(bigAlphabet[i]==1) count++;
      
   }
   cout<<count;
   return 0;
}
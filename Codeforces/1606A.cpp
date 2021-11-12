#include <iostream> 
#include <string> 
 using namespace std; 
void remove_ab(string str,int times )
{
    for(int i{0};i<str.size()-1 &&  times;i++) 
    {
       if(str[i]=='a'&&str[i+1]=='b') 
       { str[i+1]='a';   
        i++;
       }
    }
    cout<<str; 

}
void remove_ba(string str,int times )
{
    for(int i{0};i<str.size()-1 && times;i++)
    {
        if(str[i]=='b'&&str[i+1]=='a') 
        {
            str[i+1]='b';
            i++; 
        }
    }
    cout<<str; 

}
void solve()
{
  string str; 
  cin>>str; 
  int ab{0},ba{0};
  for(int i{0};i<str.length()-1;i++)
  {
      if(str[i]=='a'&& str[i+1]=='b') ab++; 
      else if (str[i]=='b' && str[i+1]=='a') ba++; 
  }
  if(ab==ba) cout<<str;
  else if(ab > ba) remove_ab(str,ab-ba); 
  else remove_ba(str,ba-ab);
//write the code solution here 
}
int main()
{
ios::sync_with_stdio(false);//for faster IO with cin and cout 
cin.tie(nullptr);
int tt; //testcases 
cin>>tt; //input the test cases 
for(int i{0};i<tt;i++){solve();cout<<endl;}//solve for each testcase
}
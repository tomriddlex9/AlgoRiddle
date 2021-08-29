#include<bits/stdc++.h>
using namespace std; 
string maxi(int n)
{
    string res="";
    if(n>9)
    {
        for(int i=0;i<9;i++)
        {
            res.push_back('9');
        }
        int m=n-9;
        for(int i=0;i<m;i++)
        {
            res.push_back(m+'0');
        }
        return res;
    }
    for(int i=0;i<n;i++)
    {
        res.push_back(n+'0');
    }
    return res;


}

string mini(int n)
{
    string res="";

    if(n==2)
    {
        return "22";
    }
    else if(n<11)
    {
        res.push_back('1');
        int m=n-1;
        for(int i=0;i<m;i++)
        {
            res.push_back(m+'0');
        }
        return res;
    }
    else if(n==11)
    {
        res.push_back('1');
        res.push_back('2');
        res.push_back('2');
        for(int i=0;i<8;i++)
        {
            res.push_back('8');
        }
    }

    else if(n==12)
    {
        res.push_back('1');
        res.push_back('2');
        res.push_back('2');
        for(int i=0;i<9;i++)
        {
            res.push_back('9');
        }
    }
    else if(n==13)
    {
        res.push_back('1');
        res.push_back('3');
        res.push_back('3');
        res.push_back('3');
        for(int i=0;i<9;i++)
        {
            res.push_back('9');
        }
    }

    return res;


}

bool verify(vector<int> &vec)
{
    for(int i=1;i<vec.size();i++)
    {
        if(i!=vec[i] && vec[i]!=0)
        {
            return false;
        }
    }
    return true;
}
bool backtrack(string strN,string &ans,int s,int ind, vector<int> &vec,int &flag)
{
    if(ind==s)
    {
        return verify(vec);
    }
    int i;
    if(!flag)
        i=strN[ind]-'0';
    else
        i=1;
    for(;i<=9;i++)
    {
        if(vec[i]<i)
        {
            break;
        }
    }

    for(;i<=s && i<=9;i++)
    {
        ans.push_back(i+'0');
        vec[i]++;
        //cout<<i<< " 125 " <<vec[i]<<" "<<ans<<endl;

        if(i>strN[0])
        {
            flag=1;
        }

        bool temp=backtrack(strN,ans,s,ind+1,vec,flag);
        if(temp )
        {
            return true;
        }

        ans.pop_back();
        vec[i]--;
        //cout<<i<< " 140 " <<vec[i]<<" "<<ans<<endl;
    }
    return false;

}

long long beautifulNumber (long long N) {

    string strN=to_string(N);
    int s=strN.size();
    //cout<<"150"<<endl;
    //string m=maxi(s);
    
    //cout<<stol(maxi(s),nullptr,10)<<" hi\n";

    if(stol(maxi(s),nullptr,10)<=N)
    {
        //cout<<"maxi"<<endl;
        return stol(mini(s+1),nullptr,10);

    }

    int flag=0;
    vector<int> vec(s+1,0);
    string ans="";
    //cout<<strN[0]<<" "<<s<<endl;

    for(int i=strN[0]-'0'; i<=s && i<=9;i++)
    {
        ans.push_back(i+'0');
        //cout<<i<< " 167 " <<ans<<endl;
        vec[i]++;

        if(i>strN[0])
        {
            flag=1;
        }

        bool temp=backtrack(strN,ans,s,1,vec,flag);
        if(temp)
        {
            return stol(ans);
        }

        ans.pop_back();
        //cout<<i<< " 182 " <<ans<<endl;
        vec[i]--;
    }
    return -1;
}
    int main( )
    {
        int n=224; 
        cout<<beautifulNumber(n);
    }
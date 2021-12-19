#include <bits/stdc++.h>
using namespace std;
 
 // editorial solution for string compare question 
/*
------------------------Input Checker----------------------------------
*/
 
long long readInt(long long l,long long r,char endd){
    long long x=0;
    int cnt=0;
    int fi=-1;
    bool is_neg=false;
    while(true){
        char g=getchar();
        if(g=='-'){
            assert(fi==-1);
            is_neg=true;
            continue;
        }
        if('0'<=g && g<='9'){
            x*=10;
            x+=g-'0';
            if(cnt==0){
                fi=g-'0';
            }
            cnt++;
            assert(fi!=0 || cnt==1);
            assert(fi!=0 || is_neg==false);
 
            assert(!(cnt>19 || ( cnt==19 && fi>1) ));
        } else if(g==endd){
            if(is_neg){
                x= -x;
            }
 
            if(!(l <= x && x <= r))
            {
                cerr << l << ' ' << r << ' ' << x << '\n';
                assert(1 == 0);
            }
 
            return x;
        } else {
            assert(false);
        }
    }
}
string readString(int l,int r,char endd){
    string ret="";
    int cnt=0;
    while(true){
        char g=getchar();
        assert(g!=-1);
        if(g==endd){
            break;
        }
        cnt++;
        assert('a'<=g and g<='z');
        ret+=g;
    }
    assert(l<=cnt && cnt<=r);
    return ret;
}
long long readIntSp(long long l,long long r){
    return readInt(l,r,' ');
}
long long readIntLn(long long l,long long r){
    return readInt(l,r,'\n');
}
string readStringLn(int l,int r){
    return readString(l,r,'\n');
}
string readStringSp(int l,int r){
    return readString(l,r,' ');
}
 
 
/*
------------------------Main code starts here----------------------------------
*/
 
const int MAX_T = 100000;
const int MAX_LEN = 1000000;
const int MAX_SUM_LEN = 1000000;
 
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
 
int sum_len = 0;
int max_n = 0;
int max_k = 0;
int yess = 0;
int nos = 0;
int total_ops = 0;
 
int n,k;
string s;

 
void solve()
{

    n = readIntLn(1, MAX_LEN);
    string a = readStringLn(1, MAX_LEN);
    string b = readStringLn(1, MAX_LEN);

    sum_len += n;

    assert(a.length()==n && b.length()==n);
    for(int i = 0 ; i < n ; i++)
    {
        int val_a = a[i] - 'a' ;
        int val_b = b[i] - 'a' ;
        assert(val_a >= 0 && val_a < 26) ;
        assert(val_b >= 0 && val_b < 26) ;
    }

    int ans = 0;

    if(a == b)
    {
        cout << ans << '\n' ;
        return ;
    }

    for(int i = 0 ; i < n ; i++)
    {
        int flag = 0 ;
        for(int j = i ; j < n ; j++)
        {
            if(a[j] < b[j])
            {
                ans += (j-i+1) ;
                i = j ;
                break ;
            }
            if(a[j] > b[j])
            {
                i = j ;
                break ;
            }
            if(j == n-1)
                flag = 1 ;
        }
        if(flag)
            break ;
    }

    cout<<ans<<'\n';
}
 
signed main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r" , stdin);
    freopen("output.txt", "w" , stdout);
    #endif
    // fast;

    int t = 1;
    
    t = readIntLn(1,MAX_T);
    
    for(int i=1;i<=t;i++)
    {     
       solve();
    }
    
    assert(sum_len <= MAX_SUM_LEN);
    assert(getchar() == -1);
 
    cerr<<"SUCCESS\n";
    cerr<<"Tests : " << t << '\n';
    // cerr<<"maxN : " << max_n << '\n';
    // cerr<<"maxK : " << max_k << '\n';
    cerr<<"Sum of lengths : " << sum_len << '\n';
    // cerr<<"Maximum length : " << max_n << '\n';
    // cerr<<"Total operations : " << total_ops << '\n';
    // cerr<<"Answered yes : " << yess << '\n';
    // cerr<<"Answered no : " << nos << '\n';
}
#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define ll long long
#define PI 3.1415926535897932384626
#define si(x) scanf("%d", &x)
#define sl(x) scanf("%lld", &x)
#define ss(s) scanf("%s", s)
#define pi(x) printf("%d\n", x)
#define pl(x) printf("%lld\n", x)
#define ps(s) printf("%s\n", s)
#define br printf("\n")
#define fo(i, n) for(i=0;i<n;i++)
#define Fo(i, k, n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define deb(x) cout << #x << " = " << x << endl;
#define deb2(x, y) cout << #x << " = " << x << ", " << #y << " = " << y << endl
#define deba(i, a, n) fo(i, n){cout << a[i] << " ";}
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, x) for(auto it = x.begin(); it != x.end(); it++)
#define trr(it, x) for(auto it = x.rbegin(); it != x.rend(); it+)
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
int rng(int lim) {
    uniform_int_distribution<int> uid(0,lim-1);
    return uid(rang);
}

const int mod = 1'000'000'007;
const int N = 3e5;

vi v[N];
int a[N];

/* ========== YOUR CODE HERE ========= */

void found(int a,int b)
{
    cout<<a<<" "<<b<<"\n";
}
void solution() {
    int i=1, j, k, n, m;
    bool isfound=false;
    string letters; 
    cin>>n; 
    getline(cin,letters);
    if(letters.size()%2!=0)cout<<"-1 -1\n";
    // else if(counter_a==counter_b) cout<<"1 "<<n<<"\n";
    for(int i=1;i<=n;i++)
    {
         int counter_a=0; 
         int counter_b=0;
        for(int j=i;j<n;j++)
        {

         letters[j]=='a'?counter_a++:counter_b++; 
         if(counter_a==counter_b)
         {
             found(i,j);
             isfound=true;
             break; 
         }
        }
         if (isfound==false)cout<<"-1 -1\n";       
    }    }


/* ========== YOUR CODE HERE ========= */

int main() 
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t = 1;
    si(t);
    while(t--) {
        solution();
    }

    return 0;
}
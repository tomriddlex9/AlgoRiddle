#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        long long a = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                for (int k = 0; k <= 1000; k++)
                {
                    a += ((pow(2, k)) * (int(int(v[i]) / pow(2, k)) % 2) * (int(int(v[j]) / pow(2, k)) % 2));

                    //a=int(a)%(int(1e9+7));
                }
            }
        }
        cout << a << endl;
    }

    return 0;
}
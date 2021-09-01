#include <iostream>
using namespace std; 
int possibilities(int x, int y)
{
    if (x < y)return 0;
    if (x == 0) return 1;
    return possibilities(x - 1, y) +
           possibilities(x / 2, y - 1);
}  
 
// Driver code
int main()
{
    int m,n; 
    cin>>m>>n;
    cout << possibilities(m, n);
    return 0;
}
 
#include<iostream>
using namespace std; 
int playtheGame(int array[],int n)
{
	 int result = 0;
    while (1)
    {
        int zero_count = 0;
        int i; 
        for (i=0; i<n; i++)
        {
            if (array[i] & 1)
                break;
            else if (array[i] == 0)
                zero_count++;
        }
        if (zero_count == n)
          return result;
        if (i == n)
        {
            for (int j=0; j<n; j++)
               array[j] = array[j]/2;
            result++;
        }
        for (int j=i; j<n; j++)
        {
           if (array[j] & 1)
           {
              array[j]--;
              result++;
           }
        }
    } 
}
int main(int argc, char const *argv[])
{
    int n=2; 
    int array[]={2,3};
    for(int i=0;i<n;i++)cin>>array[i];
    cout<<playtheGame(array,n);
	return 0;
}

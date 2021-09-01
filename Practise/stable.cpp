#include<bits/stdc++.h>
using namespace std;
void frequency(int number, int result[])
{
	int temp = 0;
	while (number != 0)
	{
		temp = number % 10;
		if (temp < 0)
		{
	
			temp = -temp;
		}
		
		result[temp]++;
		number /= 10;
	}
}
bool isNumBalanced(int number)
{
	int result[10];
	for (int i = 0; i < 10; ++i)
	{
		result[i] = 0;
	}
	int auxiliary = 0, status = 1;
	frequency(number, result);
	for (int i = 0; i < 10 && status == 1; ++i)
	{
		if (result[i] != 0)
		{
			if (auxiliary == 0)
			{
				auxiliary = result[i];
			}
			else if (auxiliary != result[i])
			{
				status = 0;
			}
		}
	}
	if (status == 0)
	{
		return false;
	}
	else
	{
		return true; 
	}
	printf("\n");
}
 
int main(int argc, char const *argv[])
{
    int numbers[5],answer;
    for(int i=0;i<5;i++) cin>>numbers[i];
    vector<int>stable;
    vector<int>notstable; 
    for(int i=0;i<5;i++)
    {
        if(isNumBalanced(numbers[i]))
        {
            int temp=numbers[i];
            stable.push_back(temp);
        } 
        else
         {
             int temp=numbers[i];
            notstable.push_back(numbers[i]);
         }
    }
  ;
    int maximum=*max_element(stable.begin(),stable.end());
    int minimum=*min_element(notstable.begin(),notstable.end()); 
    answer=maximum+minimum;

    cout<<answer<<endl;
    return 0;
}

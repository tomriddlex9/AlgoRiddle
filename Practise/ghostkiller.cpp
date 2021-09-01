#include<bits/stdc++.h>
using namespace std; 
int largestdigitofnum(int num)
{
    int largest=0; 
    while(num)
    {
        int r=num%10;
        largest=max(r,largest);
        num/=10;
    }
    return largest;
}
long int findkey(int ip1,int ip2,int ip3)
{
    long int answer; 
    int tens,hundreds,ones; 
    hundreds=((ip1/100)%10);
    tens=((ip2%100)/10); 
    ones=largestdigitofnum(ip3);
    answer=(hundreds*tens)-ones;
    return answer;  

}

int main(int argc, char const *argv[])
{
    int ip1,ip2,ip3; 
    cin>>ip1>>ip2>>ip3; 
    cout<<findkey(ip1,ip2,ip3);
    return 0;
}

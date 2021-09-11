#include<bits/stdc++.h>
using namespace std; 
int canWin(int n,int k,int l,int speed[])
{
    
    /*loosing conditions
     * if speed is less than others and k is negative k< 0 
     * if speed is less but k*(l-1)+ourspeed < max
     */
 int ourspeed=speed[n-1];//since our speed is on the nth position
 int otherMaxSpeed=speed[0];// calculating the maxspeed from the other participants 
 for(int i=0;i<n-1;i++) 
 {
     if(speed[i]>otherMaxSpeed) otherMaxSpeed=speed[i];
 }
 if(ourspeed>otherMaxSpeed) return 1;
 else if(ourspeed<otherMaxSpeed&& k<=0) return 0; 
 int boost=k*(l-1); 
 int boostedSpeed=ourspeed+boost;
 if(k>0 && ourspeed<=otherMaxSpeed && boostedSpeed<=otherMaxSpeed) return 0; 
 else return 1;    
}
int main(int argc, char const *argv[])
{
    int tc; 
    cin>>tc; 
    while(tc--)
    {
        int n,k,l; 
        cin>>n>>k>>l; 
        int speed[n];
        for (int i = 0; i < n; i++) cin>>speed[i];
        if(canWin(n,k,l,speed)) cout<<"Yes\n"; 
        else cout<<"No\n"; 
    } 
    return 0;
}

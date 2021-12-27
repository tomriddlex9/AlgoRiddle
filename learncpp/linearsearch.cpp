#include <iostream> 
#include <vector> 
#include <ctime> 
using namespace std; 
int main(){
    srand(int(time(0)));
    // input format = size of list , key to find
    vector<int> nums;
    int numsize,key,temp;
    cout<<"enter list size : ";  
    cin>>numsize;   
    for(int i=0;i<numsize;i++){
        temp=rand()%100;
        nums.push_back(temp);
    }
    // print the list 
    cout<<"\nthe random list is: "<<endl; 
    for(int x:nums){
        cout<<x<<" "; 
    }
    cout<<endl;
    cout<<"enter key: "; 
    cin>>key; 
    for(int x:nums){
        if(x==key) {
            cout<<"\nkey found!"<<endl;
            break; 
        }
    }
    return 1; 
}
#include <iostream> 
#include <cmath> 
#include <string> 
using namespace std; 
int getUserInput(){
    cout<<"Enter a number : ";
    int temp; 
    cin>>temp; 
    return temp;
    free(&temp);
}
long int add(int a,int b){
    return a+b; 
}
void printValue(long int x){
   cout<<"\nThe sum of two numbers is : "<<x<<endl; 
}
int main()
{ 
    int x{getUserInput()};
    int y{getUserInput()};
    printValue(add(x,y)); 
}
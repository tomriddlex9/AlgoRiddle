//program to calculate the square root of a number 
//with and without using the square root function 
#include<bits/stdc++.h>
//recursive function that returns square root of 
//a number with 5 decimal places precision 
double Square(double n,double i , double j )
{
    double mid=(i+j)/2;
    double mul=mid*mid;
    // If mid itself is the square root,
    // return mid
    if ((mul == n) || (abs(mul - n) < 0.00001))
        return mid;
 
    // If mul is less than n, recur second half
    else if (mul < n)
        return Square(n, mid, j);
 
    // Else recur first half
    else
        return Square(n, i, mid);
}

double findsqrt(int x)
{
    //to iterate from 1 to i where i*i is strictly greater than x 
    double i=1,res; 
    //flag to check if root is found 
    bool found=false; 
    while(!found)
    {
        //if x is a perfect square 
        if(i*i == x)
        { 
            found=true; 
            res=i; 
            break;
        }
        else if( i*i > x)
        {
            //square root lies in the interval i-1 and i 
            res=Square(x,i-1,i);
            found=true; 
            break; 
        }
        i++; 
    }
    return res;
}
int main(int argc, char const *argv[])
{
    int number;
    double root; 
    std::cout<<"Enter the number : ";
    std::cin>>number; 
    //using the sqrt function 
    std::cout<<"\nThe square root is : "<<sqrt(number);
    //without using the sqrt function
    root=findsqrt(number);
    std::cout<<"\nThe square root without using std function is : " << std::setprecision(5)<<root; 
    return 0;
}

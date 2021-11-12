#include<bits/stdc++.h>

using namespace std;
//Implement the class Box  
class Box
{
//l,b,h are integers representing the dimensions of the box
  private: 
  int l,b,h; 
// The class should have the following functions : 
// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);
public : 
   Box(){
     l=0;
     b=0;
     h=0;
   }
    Box(int nl,int nb,int nh)
    {
        l=nl; 
        b=nb;
        h=nh;
    }
    Box(Box& new_Box)
    {
        l=new_Box.l; 
        h=new_Box.h;
        b=new_Box.b;
    }
// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box
   int getLength(){return l;}
   int getBreadth(){return b;}
   int getHeight(){return h;}
   long long CalculateVolume()
   {
       long long volume=l*b*h; 
       return volume; 
   }
   
//Overload operator < as specified
//bool operator<(Box& b)
bool operator <(Box &B)
   {
       if(l<B.l) return true; 
       else if(l==B.l)
       {
           if(b<B.b) return true;
       }
       else if(b==B.b)
       {
           if(h<B.h) return true; 
       }
       return false; 
   }
};
//Overload operator << as specified
ostream &operator<<(ostream &out,Box &B)
{
    out<<B.getLength()<<" "<<B.getBreadth()<<" "<<B.getHeight();
    return out; 
}
//ostream& operator<<(ostream& out, Box& B)

void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}
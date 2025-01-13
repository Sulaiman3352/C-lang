#include<bits/stdc++.h>

using namespace std;
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
#include <iostream>
using namespace std;

class Box {
private:
    int length, breadth, height;

public:
    // Default constructor
    Box() : length(0), breadth(0), height(0) {}

    // Parameterized constructor
    Box(int length, int breadth, int height)
        : length(length), breadth(breadth), height(height) {}

    // Copy constructor
    Box(const Box& B) : length(B.length), breadth(B.breadth), height(B.height) {}

    // Accessors
    int getLength() const { return length; }
    int getBreadth() const { return breadth; }
    int getHeight() const { return height; }

    // Volume calculation
    long long CalculateVolume() const { return (long long)length * breadth * height; }

    // Overload < operator
    bool operator<(const Box& B) const {
        if (length < B.length) {
            return true;
        } else if (length == B.length) {
            if (breadth < B.breadth) {
                return true;
            } else if (breadth == B.breadth) {
                if (height < B.height) {
                    return true;
                }
            }
        }
        return false;
    }

    // Overload << operator
    friend ostream& operator<<(ostream& out, const Box& B) {
        out << B.length << " " << B.breadth << " " << B.height;
        return out;
    }
};


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

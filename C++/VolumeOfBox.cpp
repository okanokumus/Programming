// VolumeOfBox.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
class Box {

public:
	
	void getBox();  // get the dimension of the box 
	double volume();
	//with default value
	double h = 0;
	double w = 0;
	double l = 0;
	Box();
	~Box();

};

// get the dimension of the box
void Box::getBox() {

	cout << "enter the height of the box: ";
	cin >> h;

	cout << "enter the width of the box: ";
	cin >> w;
	
	cout << "enter the legth of the box: ";
	cin >> l;

}

double Box::volume() {
	return h * w * l;
}

// Constructors
Box::Box() 
{
}
// destructure
Box::~Box()
{
}

int main()
{
	Box myBox; // Create an object
	myBox.getBox();
	cout << "volume of the box is : " << myBox.volume()<<endl;
	cin.ignore();
	cin.get();
    return 0;
}


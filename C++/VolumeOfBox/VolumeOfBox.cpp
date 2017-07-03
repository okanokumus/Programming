// VolumeOfBox.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Box.h"

using namespace std;

int main()
{
	Box myBox;
	myBox.getBox();
	cout << "volume of the box is : " << myBox.volume() << endl;
	cin.ignore();
	cin.get();
    return 0;
}


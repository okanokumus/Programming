//class implementation file
#include "stdafx.h"
#include <iostream>
#include "Box.h"

using namespace std;

// Constructors
Box::Box() {
}
// destructure
Box::~Box() {
}

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

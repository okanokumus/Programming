// reference page for header file: http://www.learncpp.com/cpp-tutorial/19-header-files/
#pragma once
// header file for add two numbers
// This is start of the header guard.  ADD_H can be any unique name.  By convention, we use the name of the header file.
#ifndef ADD_H
#define ADD_H

// This is the content of the .h file, which is where the declarations go
int add(double x, double y); 

int add(double x, double y) {
	return x + y;
}
// This is the end of the header guard
#endif

/*
// usage of the header file in main file
#include "stdafx.h"
#include <iostream>
#include "add.h"

using namespace std;

int main()
{
	cout << add(50, 85);
	cin.get();
	return 0;
}
*/

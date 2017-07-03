// what_is_vectors.cpp : Defines the entry point for the console application.
//
// 4.03.17
// introduction the vectors
// okan okumuþ
// https://www.youtube.com/watch?v=Cq1h1KPoGBU

#include "stdafx.h"
#include <iostream>
#include <vector>

using namespace std;



int main()
{
	// Format: vector <datatype > vectorname;
	vector <int> myvector;

	// adds an element to the END of the vector also resize it
	myvector.push_back(5);
	myvector.push_back(9); 
	myvector.push_back(54);
	myvector.push_back(4);

	// unsigned int  : int and is always positive
	for (unsigned int i = 0; i < myvector.size(); i++) {
		cout << myvector.at(i)<< " ";
		// or cout<<myvector[i];
	}

	// insert an element to the vector
	// myvector.begin() -->> reads vector from the first element (index 0)
	myvector.insert(myvector.begin(), 0); // adds elements BEFERO specified index number so this function add 0 as a first element

	cout << "\nafter adding an element\n";

	for (unsigned int i = 0; i < myvector.size(); i++) {
		cout << myvector.at(i) << " ";
		// or cout<<myvector[i];
	}

	// insert an element as a third element
	myvector.insert(myvector.begin()+2, 888);

	cout << "\nafter adding an element\n";
	for (unsigned int i = 0; i < myvector.size(); i++) {

		cout << myvector.at(i) << " ";
		// or cout<<myvector[i];
	}

	myvector.erase(myvector.begin() + 2);// eraede the element AT the specified elemet
	cout << "\nafter ereasing at the third element";
	for (unsigned int i = 0; i < myvector.size(); i++) {
		cout << myvector.at(i) << " ";
		// or cout<<myvector[i];
	}

	// returns boolean value if whether vector is empty (false or true)
	if (myvector.empty())
		cout << "\nis empty! ";
	else {
		cout << "\nis not empty!!";
	}

	//myvector.clear(); // removes all elements in vector  
	myvector.clear();
	cout << "\nafter using myvector.clear() function";
	if (myvector.empty())
		cout << "\nis empty! ";
	else {
		cout << "\nis not empty!!";
	}

	cin.get();

	return 0;
}


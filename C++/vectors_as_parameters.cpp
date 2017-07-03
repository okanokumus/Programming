// vectors_as_parameters.cpp : Defines the entry point for the console application.
//
// 4.03.17
// okan okumuþ
//https://www.youtube.com/watch?v=ReWNqNAhlkY
// vectors as paramerters on the function
//
#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;

void fillvector(vector<int>&); // always pass by reference (vectors is very large in memory)
void printvector(vector<int>&);

int main()
{
	vector <int> myvector;
	fillvector(myvector);
	printvector(myvector);
	cin.get();
    return 0;
}

void fillvector(vector<int>& newmyvector) {
	cout << "type in a list of numbers(-1 tap stop)\n";
	int number;
	cin >> number;
	while (number!=-1){
		newmyvector.push_back(number);
		cin >> number;
	}
	cout << endl;

}

void printvector(vector<int>& printmyvector) {
	cout << "vector :";
	for (unsigned int i = 0; printmyvector.size(); i++) {
		cout << printmyvector.at(i)<<" ";

	}

}
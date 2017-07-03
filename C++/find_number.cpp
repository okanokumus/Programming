// find_number.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
	// enter the number that will be attempted to find
	// decleraing the numbers
	int number; 
	int guess; // number from the user
	int iteration=0; // after how many trying

	// declaring the vector
	// this vector will store the said numbers
	vector<int>myvector;

	cout << "enter the number in your mind between (10,100) : ";
	cin >> number;
	
	cout << "\nlet's start the game!!!\n";
	cout << "enter a number between (10,100) : ";
	cin >> guess;
	myvector.push_back(guess);
	if (guess != number) {
		do {
			iteration++;
			if (abs(guess - number) < 10) 
				cout << "\nwarm up! you are close\n";
			if (abs(guess - number) >= 10 && abs(guess - number) <= 20)
					cout << "neither warm nor cold! you have a little way\n";
			if (abs(guess - number) > 20)
					cout << "very cold! you are very far away\n";
			cout << "enter the new number : ";
			cin >> guess;

			} while (guess != number);
	}

	cin.get();
		cout << "correct answer!!!";
		cout << "my number was " << number<<" and you find it correctly: ( "<<guess<<" )\n";
		cout << "after "<<iteration<<" trying";
	cin.get();
	return 0;
}

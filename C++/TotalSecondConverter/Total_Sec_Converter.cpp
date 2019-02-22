// Total_Sec_Converter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

using namespace std;

void Total_Sec_Converter(double);
double TOT_SEC;
int hours;
int minutes;
int sec;

void Total_Sec_Converter(double Total_Sec_F) {
	hours = (int)Total_Sec_F / 3600;
	minutes = (int)(Total_Sec_F - (hours * 3600)) / 60;
	sec = (int)(Total_Sec_F - (minutes * 60) - (hours * 3600));
}

int main()
{
	cout << "Enter the total number of sec. (0 to quit app.)\n";
	cin >> TOT_SEC;
	while (TOT_SEC != 0)
	{
		Total_Sec_Converter(TOT_SEC);
		cout << "\n";
		cout << hours;
		cout << ":";

		cout << minutes;
		cout << ":";
		cout << sec;
		cout << "\n";
		cout << "Enter the total number of sec. (0 to quit app.)\n";
		cin >> TOT_SEC;
	}
}

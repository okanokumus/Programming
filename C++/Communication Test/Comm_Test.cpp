// Comm_Test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
	21.02.2019
	OKAN OKUMUŞ
*/
#include "pch.h"
#include <iostream>
#include <ctime>
#include <vector> 

using namespace std;

int CommState;
clock_t start_OK, start_NOK;
clock_t end_OK, end_NOK;
double duration_OK, duration_NOK;
vector  <double> duration_OK_, duration_NOK_ ;

int main()
{
    cout << "Hello There!\n"; 
	cout << "Welcome back to the C++ programming!\n";
	cout << "Here, we are to test the Communication between two devices!\n";
	cout << "Important part is to obtain the Comm. OK and NOK periods of time!\n";
	cout << "####----####\n";
	cout << "0: Communication NOK\n";
	cout << "1: Communication OK\n";
	cout << "2: To start the test\n";
	cout << "3: To quit the test\n";
	cout << "####----####\n";

	A :
	cout << "Start Test?(2(Start) OR 3(Quit))!\n";
	cin >> CommState;
	
	if (CommState==2 || CommState == 3 )
	{ 
		if (CommState == 2)
		{
			cout << "Test is started!\n";
			
			while (CommState != 3)
			{
				B:
				cout << "Communication State?(0(NOK) OR 1(OK))!\n";
				cin >> CommState;
				if (CommState <= 1)
				{
					// Comm. NOK
					if (CommState == 0)
					{
						OK1:
						start_NOK = clock();
						NOK1 :
						cout << "Communication NOK\n";
						cin >> CommState;
						if (CommState == 0)
						{
							goto NOK1;
						}
						if (CommState == 1)
						{
							end_NOK = clock();
							duration_NOK = (end_NOK - start_NOK) / double(CLOCKS_PER_SEC);
							duration_NOK_.push_back(duration_NOK);
							cout << "\nComm. NOK Durations:\n";
							for (unsigned int i = 0; i < duration_NOK_.size(); i++) {
								cout << i << ":";
								cout << duration_NOK_.at(i) << "sec\n";
							}
							cout << "\n";
							goto NOK2;
						}
					}

					// Comm. OK
					if (CommState == 1)
					{
						NOK2:
						start_OK = clock();
						OK2:
						cout << "Communication OK\n";
						cin >> CommState;
						if (CommState == 0)
						{
							end_OK = clock();
							duration_OK = (end_OK - start_OK) / double(CLOCKS_PER_SEC);
							duration_OK_.push_back(duration_OK);
							cout << "\nComm. OK Durations:\n";
							for (unsigned int i = 0; i < duration_OK_.size(); i++) {
								cout << i << ":";
								cout << duration_OK_.at(i) << "sec\n";
							}
							cout << "\n";
							goto OK1;
						}
						if (CommState == 1)
						{
							goto OK2;
						}
					}
				}
				else
				{
					if (CommState == 3)
					{
						goto C; // end the test
					}
					else
					{
						goto B; // forces the user to enter 0 or 1
					}
				}

			}
		}
	}
	else
	{
		goto A;
	}
	C:;

}
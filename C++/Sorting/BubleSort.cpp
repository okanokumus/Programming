// BubleSort.cpp : Defines the entry point for the console application.
//


#include <iostream>
#include <ctime>
#include <iomanip>
#include <vector>
using namespace std;

// Buble Sort
void buble(vector <int> &);

void printarray(vector <int> &);

int main()
{
	clock_t t1, t2;
	
	int size;
	cout << "enter the size of the numbers : ";
	cin >> size;

	int minRange, maxRange;
	cout << "enter the range:\nmin:";
	cin >> minRange;
	cout << "max:";
	cin >> maxRange;
	if (minRange >= maxRange) {
		cout << "min value must be less than max value";
		return -1;
	}
		
	vector <int> num;
	srand(time(NULL));
	// 10 random numbers will be generated in the between 10 to 100
	for (int i = 0; i < size; i++) {
		num.push_back(minRange + rand() % (maxRange-minRange+1));
	}
	cout << "numbers are:" << endl;
	// show numbers
	printarray(num);
	if (size == 1)
		cout << "no need to sort!!!";
	else { // if there are more at least more than 1 number
		cout << "\nusing Buble Sort Algorithm:";
		t1 = clock();
		buble(num);
		t2 = clock();
		cout << "Time: " << (double)(t2 - t1) / CLOCKS_PER_SEC << endl;
	}
	cin.get();
	cin.ignore();
	return 0;
}
void buble(vector <int> &numbers) {
	int i, j, swap;
	for (i = 0; i < numbers.size() - 1; i++) {
		for (j = 0; j < numbers.size() - i - 1; j++) {
			if (numbers.at(j) > numbers.at(j+1)) {
				swap = numbers.at(j);
				numbers.at(j) = numbers.at(j+1);
				numbers.at(j+1)  = swap;
			}
		}
	}
	// show sorted numbers
	cout << "\nnumbers are in sorted:" << endl;
	printarray(numbers);
}

void printarray(vector <int> &numbers) {
	for (int i = 0; i < numbers.size(); i++) {
		cout << setw(4) << numbers[i];
	}
	cout << "\n";
}
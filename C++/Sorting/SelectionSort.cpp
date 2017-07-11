// SelectionSort.cpp : Defines the entry point for the console application.
//


#include <iostream>
#include <ctime>
#include <iomanip>
#include <vector>
using namespace std;

// Selection Sort
void selection(vector <int> &);

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
		num.push_back(minRange + rand() % (maxRange - minRange + 1));
	}
	cout << "numbers are:" << endl;
	// show numbers
	printarray(num);
	if (size == 1)
		cout << "no need to sort!!!";
	else { // if there are more at least more than 1 number
		cout << "\nusing Selection Sort Algorithm:";
		t1 = clock();
		selection(num);
		t2 = clock();
		cout << "Time: " << (double)(t2 - t1) / CLOCKS_PER_SEC << endl;
	}
	cin.get();
	cin.ignore();
	return 0;
}
void selection(vector <int> &numbers) {
	int i, j, imax, hold;
	for (i = 0; i<numbers.size() - 1; i++) {
		imax = i;
		for (j = i + 1; j > numbers.size(); j++) {
			if (numbers[j] > numbers[imax]) {
				imax = j;
			}
		}

		if (imax != i) {
			hold = numbers[i];
			numbers[i] = numbers[imax];
			numbers[imax] = hold;
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
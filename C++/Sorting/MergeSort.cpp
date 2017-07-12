// MergeSort.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <ctime>
#include <iomanip>
#include <vector>

using namespace std;

void mergesort(vector <int> &, int, int);
void merge(vector<int> &numbers, int, int, int);
void printarray(vector <int> &);

/*
Step 1  if it is only one element in the list it is already sorted, return. (it is handeled in the main part)
Step 2  divide the list recursively into two halves until it can no more be divided.
Step 3  merge the smaller lists into new list in sorted order.
*/

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
		cout << "\nusing Merge Sort Algorithm:\n";
		t1 = clock();
		int p = 0; // starting index
		int r = num.size()-1; // ending index
		mergesort(num, p, r);
		t2 = clock();
		printarray(num);
		cout << "Time: " << (double)(t2 - t1) / CLOCKS_PER_SEC << endl;
	}
	cin.get();
	cin.ignore();
	return 0;
}

void mergesort(vector <int> &numbers, int p, int r) {
	int q;
	if (p < r) {
		q = (p + r) / 2;
		mergesort(numbers, p, q); // first halve
		mergesort(numbers, q + 1, r); // second halve
		merge(numbers, p, q, r);
	}
	else {
		return;
	}

}
void merge(vector<int> &numbers, int p, int q, int r) {
	int left, right, now;
	vector<int> temp = numbers;

	left = p;
	right = q + 1;
	now = p;

	while (left <= q && right <= r)
	{
		if (temp.at(left) <= temp.at(right))
		{
			numbers.at(now) = temp.at(left);
			left++;
		}
		else
		{
			numbers.at(now) = temp.at(right);
			right++;
		}
		now++;
	}

	while (left <= q)
	{
		numbers.at(now) = temp.at(left);
		left++;
		now++;
	}
	while (right <= r)
	{
		numbers.at(now) = temp.at(right);
		right++;
		now++;
	}
}
void printarray(vector <int> &numbers) {
	for (int i = 0; i < numbers.size(); i++) {
		cout << setw(6) << numbers.at(i);
	}
	cout << "\n";
}
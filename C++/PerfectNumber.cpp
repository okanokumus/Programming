// Visual Studio 2015

/*
what is perfect number?

a perfect number is a positive integer that is equal to the sum of its proper divisors
-> all perfect numbers are even
6 = 1 * 2 * 3
28 = 1 * 2 * 4 * 7 * 14 

*/
#include <iostream>
#include <vector>
using namespace std;

bool FindDivisors(vector <int> &, int);

int main() {
	int number; // given number
	vector <int> divisors;
	cout << "Given number is a perfect number or not ?\n";

	cout << "enter a even positive integer: ";
	cin >> number;
	cout << "given number is " << number << endl;
	// to check the given number is posivite even integer or not
	if (number % 2 == 1 || number <= 0)
		cout << "given number must be positive even number";
	else {
		cout << "suitable number is given...\n";
		cout << "################\n";
		if (FindDivisors(divisors, number))
			cout << "given number is a perfet number";
		else
			cout << "given number is not a perfet number";

	}
		cin.get();
		cin.ignore();
		return 0;

}

// find and store the divisors the given number 
bool FindDivisors(vector<int>& divisor, int num) {
	int sum = 0; // holds the sum of the all divisors
	// divisors must be between 1 and number /2  and we ignore itself of the number;
	int leastDivisor = 1;
	int mostDivisor = num / 2;
	cout << "divisors of the given number is :" << endl;
	for (int i = leastDivisor; i <= mostDivisor; i++) {
		if (num %i == 0) {
			divisor.push_back(i);
			cout << i << endl;
			sum = sum + i;
		}
	}
	if (sum == num)
		return true;
	else
		return false;
}

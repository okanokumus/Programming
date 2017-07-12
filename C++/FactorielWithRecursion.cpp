// To calculate Factoriel with Recursion function
// recursion is when a function calls itself
#include <iostream>

using namespace std;

int multip(int);

int main() {
	cout << "this is the intro to the concept of recursion...\n";
	// to calculate the factoriel of a given integer
	int n;
	cout << "enter the integer: ";
	cin >> n;
	cout << "factorel of this number is : " << multip(n);

	cin.get();
	cin.ignore();
	return 0;
}
int multip(int x) {
		if (x == 1)
			return 1;
		else
		{
			return (x * (multip(x - 1)));
		}
}
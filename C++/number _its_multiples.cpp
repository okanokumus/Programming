/* okan
24.01.17
c++ basic
to get a number an write it in a table with own multiplication*/
#include <iostream>
#include <iomanip> // it is required for setw(n)

using namespace std;

void print(int[], int);

int main() {
	int i, num[100] = { 0 };
	cout << "enter a number : ";
	cin >> num[0];
	for (i = 0; i<100; i++) {
		num[i] = num[0] * (i + 1);
	}
	print(num, 100);
	cin.get();
	cin.ignore();
	return 0;
}

void print(int a[], int n) {
	int i;
	for (i = 0; i<n; i++) {
		cout << setw(5) << *(a + i);
		if ((i + 1) % 10 == 0)
			cout << "\n";
	}
}
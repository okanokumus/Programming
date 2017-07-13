#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;
int main() {
	int i;
	float temp;
	cout << "press 1 for fahrenheit to celsius\n";
	cout << "press 2 for celsius to fahrenheit\n";
	cin >> i;
	switch (i) {
	case 1:
		cout << "enter temperature in Fahrenheit\n";
		cin >> temp;
		temp = (temp - 32) * 5 / 9;
		cout << "temp in celsius :" << setw(5) << temp;
		break;
	case 2:
		cout << "enter temperature in Celsius\n";
		cin >> temp;
		temp = temp * 9 / 5 + 32;
		cout << "temp in celsius :" << setw(5) << temp;
		break;
	default:
		cout << "not in range!!!";
		break;
	}
	_getch();
	return 0;
}
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

struct phone {
	string name;
	string surname;
	int areacode;
	int exchange;
	int number;
}one;

void get(phone *one);
void print(phone *one);

int main() {
	
	int n; // to control exit
	// 0 to exit
	// 1 to take new information

	get(&one); // to get information
	print(&one); // to print the taken info

	cout << "\npress 0: to exit" << "\npress 1 : to continue" << "\n -> ";
	cin >> n;

	// to exit the program
	if (n == 0) exit(0);

	// take the information repeatedly
	while (n == 1) {

		get(&one);
		print(&one);
		cout << "\npress 0: to exit" << "\npress 1 : to continue"<<"\n -> ";
		cin >> n;
		if (n == 0)
			exit(0);
		
	}

	cin.get();
	cin.ignore();
	return 0;
}

void get(phone *one) {
	// open a file in write mode.

	ofstream outBook;
	outBook.open("PhoneBook.txt",  ios::app);

	outBook << "\n#### NEW PERSON ####" << endl;
	cout << "enter the name                     : ";
	cin >> one->name;
	cout << "enter the surname                  : ";
	cin >> one->surname;
	outBook << one->name << " " << one->surname << ": ";
	cout << "enter the areacode like (531)      : ";
	cin >> one->areacode;
	cout << "enter the exchange like (990)      : ";
	cin >> one->exchange;
	cout << "enter the phone number like (4174) : ";
	cin >> one->number;
	outBook << one->areacode << " " << one->exchange << " " << one->number << endl;
	outBook.close();
}

void print(phone *one) {
	cout << endl << one->name << " ";
	cout << one->surname << " : ";
	cout << setw(4) << one->areacode;
	cout << setw(4) << one->exchange;
	cout << setw(5) << one->number << "is saved to the 'PhoneBook.txt' file" <<endl;
}
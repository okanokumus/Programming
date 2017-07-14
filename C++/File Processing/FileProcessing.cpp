#include <iostream>
#include <fstream> // it is required for file processing (ofstream, ifstream, fstream)

using namespace std;

int main(){
	char FirstName[30], LastName[30];
	int Age;
	char FileName[20];

	cout << "Enter First Name: ";
	cin >> FirstName;
	cout << "Enter Last Name:  ";
	cin >> LastName;
	cout << "Enter Age:        ";
	cin >> Age;
	//cout << "\nEnter the name of the file you want to create: ";
	//cin >> FileName;
	
	// Opening a File
	// A file must be opened before you can read from it or write to it
	// ofstream or fstream can used to open a file for writting
	// ifstream can be used only read data from file

	ofstream outPerson;
	outPerson.open("FileProcessing.txt", ios::out | ios::trunc);
	
	// Writting to a file
	// when writting to a file, insertion operator(<<) is used as in used same way in cout,the only difference is
	//  that you use an ofstream or fstream object instead of the cout object.
	outPerson << FirstName << "\n" << LastName << "\n" << Age;
	outPerson.close();

	// Reading from a File
	// when writting to a file, insertion operator(>> is used as in used same way in cin,the only difference is
	//  that you use an ifstream or fstream object instead of the cout object
	ifstream inPerson;
	inPerson.open("FileProcessing.txt");
	inPerson >> FirstName >> LastName >> Age;
	cout << "\nFirst Name: " << FirstName;
	cout << "\nLast Name:  " << LastName;
	cout << "\nEnter Age:  " << Age;
	inPerson.close();

	// Closing a File
	void close(); // closes the file before program termination.
	cin.get();
	cin.ignore();
	return 0;

}
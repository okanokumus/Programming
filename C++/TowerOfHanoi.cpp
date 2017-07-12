#include <iostream>
#include <cmath>

using namespace std;

void hanoi(int n, char beg, char aux, char end);

int main() {
	int N; // number of the disk
	char a[] = "left";
	char b[] = "middle";
	char c[] = "right";
	cout << "a: " << a << " tower\n";
	cout << "b: " << b << " tower\n";
	cout << "c: " << c << " tower\n";

	cout << "enter the number of disk: ";
	cin >> N;
	cout << "minumum moves: " << pow(2,N) - 1 << endl;
	printf("Moves: \n");
	hanoi(N, 'a', 'b', 'c');	//N = 3 (no. of disks)  a, b, c are the three pegs
	cin.get();
	cin.ignore();
	return 0;
}
void hanoi(int n, char beg, char aux, char end) {
	if (n == 1) {
		cout<<beg<<" --> "<< end<<endl;
	}
	else {
		hanoi(n - 1, beg, end, aux);
		hanoi(1, beg, aux, end);
		hanoi(n - 1, aux, beg, end);
	}
}

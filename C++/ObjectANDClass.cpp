// aim of this code is to understand object and class concept

#include <iostream>
#include <iomanip>

using namespace std;

class part {
private:
	int modelnumber;
	int partnumber;
	float cost;
public:
	void setpart(int mn, int pn, float c) {
		modelnumber = mn;
		partnumber = pn;
		cost = c;
	}
	void showpart() {
		cout << setw(15) << "model number : " << setw(5) << modelnumber << endl;
		cout << setw(15) << "part number : " << setw(5) << partnumber << endl;
		cout << setw(15) << "cost : " << setw(5) << cost << endl;
	}
};
int main() {
	part part1, part2;
	part1.setpart(1235, 554, 13.59);
	part1.showpart();
	part2.setpart(12, 54, 113.9);
	part2.showpart();
	cin.get();
	cin.ignore();
	return 0;
}
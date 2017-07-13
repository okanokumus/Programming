#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
struct coor {
	double x;
	double y;
};

void add(coor first, coor second, coor *tot);
void EuclideanDistance(coor , coor);
int main() {
	
	cout << "add two given (x,y) coordinates\n";

	coor first, second, tot;
	cout << "enter the first coordinate (x, y) :"<<endl;
	cout << "x: ";
	cin >> first.x;
	cout << "y: ";
	cin >> first.y;
	cout << "enter the second coordinate (x, y) :" << endl;
	cout << "x: ";
	cin >> second.x;
	cout << "y: ";
	cin >> second.y;

	add(first, second, &tot); // will add two coordinates
	EuclideanDistance(first, second); // computes the Euclidean Distance of the given coodinates
	cin.get();
	cin.ignore();
	return 0;
}
void add(coor first, coor second, coor *tot) {
	tot->x = first.x + second.x;
	tot->y = first.y + second.y;
	cout << "addition of the given coordinates is (";
	cout << setw(3) << tot->x;
	cout << ",";
	cout << setw(3) << tot->y;
	cout << ")";
}
void EuclideanDistance(coor first, coor second) {
	cout << "\neuclidian distance is " << sqrt(pow((first.x - second.x), 2)+ pow((first.y - second.y), 2))<<endl;

}
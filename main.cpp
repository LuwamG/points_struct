#include "points_struct.hpp"
#include <iostream>
using namespace std;
int main() {
	Point point1;
	Point point2;
	cout << "Enter the x and y  values for point 1:";
	cin >> point1.x >> point1.y;
	cout << "Enter the x and y  values for point 2:";
	cin >> point2.x >> point2.y;
	if (point1.x == point2.x && point1.y == point2.y) {
		cout << "Point 1 and 2 are equal." << endl;
	}
	else
		cout << "Point 1 and 2 are not equal." << endl;

	cout << "Point1: " << point1 << endl;
	cout << "Point2: " << point2 << endl;
	return 0;
}

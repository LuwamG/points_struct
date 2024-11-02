#include "points_struct.hpp"
using namespace std;
bool operator==(Point& point1, Point& point2) {//equal overloading soperator
	return (point1.x == point2.x && point1.y == point2.y);
}
ostream& operator<< (ostream& stream, const Point& point1) {//output overloading operator
	stream << point1.x << " " << point1.y;
	return stream;
}
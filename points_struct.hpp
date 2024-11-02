#ifndef POINTS_STRUCT_HPP
#define POINTS_STRUCT_HPP
#include <iostream>
using namespace std;
struct Point {
	int x;
	int y;


};
ostream& operator<< (ostream& stream, const Point& point1);
bool operator==(Point& point1, Point& point2);
#endif
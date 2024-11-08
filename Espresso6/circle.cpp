#include<iostream>
#include<string>
using namespace std;

class Point {
private:
	int x;
	int y;
public:
	Point();
	Point(int a, int b);
	void print();
};

Point::Point():x(0),y(0)
{
}

Point::Point(int a, int b):x(a),y(b)
{
}

void Point::print()
{
	cout << "(" << x << ", " << y << ")\n";
}

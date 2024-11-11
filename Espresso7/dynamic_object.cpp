#include<iostream>
#include<string>
using namespace std;

class Car {
	int speed;
	int gear;
	string color;
	string name;
public:
	Car(int s = 0, int g = 1, string c = "white", string n="phantom") :speed(s), gear(g), color(c),name(n) {}
	void print()
	{
		cout << "속도:" << speed << "기어: " << gear << "색상:" << color << "이름: "<< name <<endl;
	}
};
int main()
{
	Car myCar;
	myCar.print();

	Car* pCar = new Car(0, 1, "blue","tesla");
	pCar->print();
	return 0;
}
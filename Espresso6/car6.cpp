#include<iostream>
#include<string>
using namespace std;

class Car {
	int speed;
	int gear;
	string color;

public:
	Car(int s, int g, string c) :speed(s), gear(g), color(c)
	{
		cout << "������ ȣ��" << endl;
	}
	Car(const Car& obj) :speed(obj.speed), gear(obj.gear), color(obj.color)
	{
		cout << "���� ������ ȣ��" << endl;
	}
	void print()
	{
		cout << "============" << endl;
		cout << "�ӵ� : " << speed << endl;
		cout << "��� : " << gear << endl;
		cout << "���� : " << color << endl;
		cout << "============" << endl;
	}
};
int main()
{
	Car c1(0, 1, "yellow");
	Car c2(c1);
	c1.print();
	c2.print();
	return 0;
}
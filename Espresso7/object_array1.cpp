#include<iostream>
#include<string>
using namespace std;
class Car {
	int speed;
	int gear;
	string color;
public:
	Car(int s = 0, int g = 0, string c = "white") :speed(s), gear(g), color(c) {}
	void print();
};

void Car::print()
{
	cout << "�ӵ�:" << speed << "���:" << gear << "����:" << color<<endl;
}
int main()
{
	Car objArray[3] = {
		Car(0,1,"white"),
		Car(0,1,"red"),
		Car(0,1,"blue"),
	};
	for (int i = 0; i < 3; i++)
	{
		(objArray + i)->print();
	}
	Car* p = objArray;
	for (int i = 0; i < 3; i++)
	{
		p->print();
		p++;
	}

	return 0;

}

#include<iostream>
#include<string>
using namespace std;

class Car {
public:
	int speed;
	int gear;
	string color;

	void speedUp()
	{
		speed += 10;
	}
	void speedDown()
	{
		speed -= 10;
	}
	void show()
	{
		cout << "===============" << endl;
		cout << "�ӵ�: " << speed << endl;
		cout << "���: " << gear<< endl;
		cout << "����: " << color << endl;
		cout << "===============" << endl;
	}
};
int main()
{

	Car *dynCar = new Car(); //��ü ���� ����
	dynCar-> speed = 100;
	dynCar->gear = 2;
	dynCar->color = "green";
	dynCar->speedUp();
	dynCar->speedDown();
	dynCar->show();

	delete dynCar;
	return 0;

}


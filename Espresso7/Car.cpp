#include<iostream>
#include<string>
using namespace std;
class Car {
	int speed;
	int gear;
	string color;
public:
	Car(int s=0, int g=1, string c= "white"):speed(s),gear(g),color(c){}
	int getSpeed()
	{
		return speed;
	}
	void setSpeed(int speed)
	{
		if (speed > 0)
			this->speed = speed;
		else
			this->speed = 0;
	}
	void print()
	{
		cout << "속도:" << speed << "기어:" << gear << "색상:" << color;
	}
	void isFaster(Car* p)
	{
		if (this->getSpeed() > p->getSpeed())
			this->print();
		else
			p->print();
		cout << "의 자동차가 더 빠름" << endl;
	}	
};
int main()
{
	Car c1(0, 1, "blue");
	Car c2(100, 3, "red");
	c1.isFaster(&c2);
	return 0;
}
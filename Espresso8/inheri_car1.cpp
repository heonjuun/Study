#include<iostream>
#include<string>
using namespace std;
class Car {
public:
	int getHP()
	{
		return 100;
	}
};
class SportsCar :public Car {
public:

	int getHP()
	{
		return 300;
	}

};

int main()
{
	SportsCar sc;
	cout << "재정의된마력: " << sc.getHP() << endl;
	return 0;
}
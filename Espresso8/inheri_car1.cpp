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
	cout << "�����ǵȸ���: " << sc.getHP() << endl;
	return 0;
}
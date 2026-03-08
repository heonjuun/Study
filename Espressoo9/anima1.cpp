#include<iostream>
using namespace std;

class Animal
{
public:
	virtual void speak() //가상하는 멤버함수에만 사용가능 동적바인딩을 하기 위해 사용한다.
	{
		cout << "animal speak()" << endl;
	}
};
class Dog : public Animal
{
public:
	void speak()
	{
		cout << "멍멍" << endl;
	}
};
class Cat :public Animal
{
public:
	void speak()
	{
		cout << "야옹" << endl;
	}
};


int main()
{
	Animal* a1 = new Dog();
	a1->speak();
	Animal* a2 = new Cat();
	a2->speak();

	//참조
	Dog d;
	Animal& d1 = d;
	Cat c;
	Animal& c1 = c;
	d.speak();
	c.speak();

	return 0;
}
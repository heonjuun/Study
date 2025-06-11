#include<iostream>
#include<string>
using namespace std;

class Person {
protected:
	string name;
	string address;
	int phone;
public:
	Person();
	~Person();
	void getPerson();
	void setPerson(string n, string ad, int p);
};
class Customer : public Person {
private:
	int cusnum;
	int mile;

};

Person::Person()
{
	this->name = "";
	this->address = "";
	this->phone = 0;
}

Person::~Person()
{
}

void Person::getPerson()
{
}

void Person::setPerson(string n, string ad, int p)
{
}

#include<iostream>
#include<string>
using namespace std;

class Employee {
private:
	string name;
	string phonenumber;
	int salary;
public:
	void eprint();

};



void Employee::eprint()
{
	cout << "�̸��Է�:";
	cin >> name;
	cout << "��ȭ��ȣ �Է�:";
	cin >> phonenumber;
	cout << "���� �Է�:";
	cin >> salary;

	cout << "�̸�: " << name << endl;
	cout << "��ȣ: " << phonenumber<<endl;
	cout << "����: " << salary << endl;
}
int main()
{
	Employee e;
	e.eprint();


	return 0;
}

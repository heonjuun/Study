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
	cout << "이름입력:";
	cin >> name;
	cout << "전화번호 입력:";
	cin >> phonenumber;
	cout << "연봉 입력:";
	cin >> salary;

	cout << "이름: " << name << endl;
	cout << "번호: " << phonenumber<<endl;
	cout << "연봉: " << salary << endl;
}
int main()
{
	Employee e;
	e.eprint();


	return 0;
}

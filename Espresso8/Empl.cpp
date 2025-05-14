#include<iostream>
#include<string>
using namespace std;

class Employee {
protected:
	string name;
	int number;
public:
	Employee();
	~Employee();
	void setEmployee(string n, int num);
	void getEmployee();
	virtual void computeSalary(); 
};

Employee::Employee()
{
	this->name = "";
	this->number = 0;
}

Employee::~Employee()
{
}

void Employee::setEmployee(string n, int num)
{
	this->name = n;
	this->number = num;
}

void Employee::getEmployee()
{
	cout << "�̸� : " << name << endl;
	cout << "��� : " << number << endl;
}

void Employee::computeSalary()
{
	// Base class�� ���� ����
}

class SalariedEmployee : public Employee
{
private:
	int salary;
public:
	SalariedEmployee();
	~SalariedEmployee();
	void computeSalary();
	void setSalariedEmployee(string n1, int num1, int sal);
	void getSalariedEmployee();
};

SalariedEmployee::SalariedEmployee()
{
	this->salary = 0;
}

SalariedEmployee::~SalariedEmployee()
{
}

void SalariedEmployee::computeSalary()
{
	cout << "�̸� : " << name << endl;
	cout << "��� : " << number << endl;
	cout << "���� : " << salary << "��" << endl;
}

void SalariedEmployee::setSalariedEmployee(string n1, int num1, int sal)
{
	this->name = n1;
	this->number = num1;
	this->salary = sal;
}

void SalariedEmployee::getSalariedEmployee()
{
	cout << "�̸� : " << name << endl;
	cout << "��� : " << number << endl;
	cout << "���� : " << salary << "��" << endl;
}

class HourlyEmployee : public Employee
{
private:
	int workTime;       // �Ϸ� �ٹ� �ð�
	int hourPerMoney;   // �ñ�
public:
	HourlyEmployee();
	~HourlyEmployee();
	void setHourlyEmployee(int work, int hour, string n2, int num2);
	void getHourlyEmployee();
	void computeSalary();
};

HourlyEmployee::HourlyEmployee()
{
	this->workTime = 0;
	this->hourPerMoney = 0;
}

HourlyEmployee::~HourlyEmployee()
{
}

void HourlyEmployee::setHourlyEmployee(int work, int hour, string n2, int num2)
{
	this->workTime = work;
	this->hourPerMoney = hour;
	this->name = n2;
	this->number = num2;
}

void HourlyEmployee::getHourlyEmployee()
{
	cout << "�̸� : " << name << endl;
	cout << "��� : " << number << endl;
	cout << "�ٹ��ð�(�Ϸ����) : " << workTime << "�ð�" << endl;
	cout << "�ñ� : " << hourPerMoney << "��" << endl;
}

void HourlyEmployee::computeSalary()
{
	int daysPerMonth = 20; // �� �ٹ��� ��
	int monthlySalary = workTime * hourPerMoney * daysPerMonth;

	cout << "�̸� : " << name << endl;
	cout << "��� : " << number << endl;
	cout << "���� : " << monthlySalary << "��" << endl;
}

int main()
{
	string name;
	int number;
	int hourWage;
	int workTime;

	cout << "��� �̸� �Է�: ";
	cin >> name;

	cout << "��� �Է�: ";
	cin >> number;

	cout << "�ñ� �Է�(��): ";
	cin >> hourWage;

	cout << "�Ϸ� �ٹ��ð� �Է�(�ð�): ";
	cin >> workTime;

	HourlyEmployee emp;
	emp.setHourlyEmployee(workTime, hourWage, name, number);

	cout << "\n[��� ���� �� ���� ���]\n";
	emp.computeSalary();

	return 0;
}

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
	cout << "이름 : " << name << endl;
	cout << "사번 : " << number << endl;
}

void Employee::computeSalary()
{
	// Base class는 내용 없음
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
	cout << "이름 : " << name << endl;
	cout << "사번 : " << number << endl;
	cout << "월급 : " << salary << "원" << endl;
}

void SalariedEmployee::setSalariedEmployee(string n1, int num1, int sal)
{
	this->name = n1;
	this->number = num1;
	this->salary = sal;
}

void SalariedEmployee::getSalariedEmployee()
{
	cout << "이름 : " << name << endl;
	cout << "사번 : " << number << endl;
	cout << "월급 : " << salary << "원" << endl;
}

class HourlyEmployee : public Employee
{
private:
	int workTime;       // 하루 근무 시간
	int hourPerMoney;   // 시급
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
	cout << "이름 : " << name << endl;
	cout << "사번 : " << number << endl;
	cout << "근무시간(하루기준) : " << workTime << "시간" << endl;
	cout << "시급 : " << hourPerMoney << "원" << endl;
}

void HourlyEmployee::computeSalary()
{
	int daysPerMonth = 20; // 월 근무일 수
	int monthlySalary = workTime * hourPerMoney * daysPerMonth;

	cout << "이름 : " << name << endl;
	cout << "사번 : " << number << endl;
	cout << "월급 : " << monthlySalary << "원" << endl;
}

int main()
{
	string name;
	int number;
	int hourWage;
	int workTime;

	cout << "사원 이름 입력: ";
	cin >> name;

	cout << "사번 입력: ";
	cin >> number;

	cout << "시급 입력(원): ";
	cin >> hourWage;

	cout << "하루 근무시간 입력(시간): ";
	cin >> workTime;

	HourlyEmployee emp;
	emp.setHourlyEmployee(workTime, hourWage, name, number);

	cout << "\n[사원 정보 및 월급 출력]\n";
	emp.computeSalary();

	return 0;
}

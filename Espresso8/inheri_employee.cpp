//#include<iostream>
//#include<string>
//using namespace std;
//
//class Employee {
//private:
//	int rrn; //regident resgistration number
//protected:
//	int salary;
//public:
//	string name;
//	void setSalary(int salary);
//	int getSalary();
//};
//
//void Employee::setSalary(int salary)
//{
//	this->salary = salary;
//}
//
//int Employee::getSalary()
//{
//	return salary;
//}
//class Manager :public Employee {
//	int bonus;
//public:
//	Manager(int b = 0) : bonus(b) {}
//	void modify(int s, int b);
//	void display();
//};
//
//void Manager::modify(int s, int b)
//{
//	salary = s;
//	bonus = b;
//}
//
//void Manager::display()
//{
//	cout << "����:" << salary << " ���ʽ�:" << bonus << endl;
//
//}
//int main()
//{
//	Manager m;
//	m.setSalary(2000);
//	m.display();
//	m.modify(1000, 500);
//	m.display();
//}

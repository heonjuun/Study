#include<iostream>
#include<string>
using namespace std;

class ParentClass {
public:
	void print()
	{
		cout << "부모클래스의 print() 멤버 함수" << endl;
	}
};
class ChildClass :public ParentClass {
	int data;
public:
	void print() {
		ParentClass::print();
		cout << "자식 클래스의 print()멤버 함수" << endl;
	}
};
int main()
{
	ChildClass obj;
	obj.print();
	return 0;
}
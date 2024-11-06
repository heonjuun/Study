//#include<iostream>
//#include<string>
//using namespace std;
//
//class Student {
//	char* name;
//	int number;
//public:
//	Student(const char* p, int n)
//	{
//		cout << "메모리 할당" << endl;
//		name = new char[strlen(p) + 1];
//		strcpy(name, p);
//		number = n;
//	}
//	Student(const Student& s)
//	{
//		cout << "메모리 할당" << endl;
//		name = new char[strlen(s.name) + 1];
//		strcpy(name, s.name);
//		number = s.number;
//	}
//	~Student()
//	{
//		cout << "메모리 소멸" << endl;
//		delete[] name;
//	}
//};
//int main()
//{
//	Student s1("park", 20100001);
//	Student s2(s1);
//	return 0;
//}
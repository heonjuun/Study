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
//		cout << "�޸� �Ҵ�" << endl;
//		name = new char[strlen(p) + 1];
//		strcpy(name, p);
//		number = n;
//	}
//	Student(const Student& s)
//	{
//		cout << "�޸� �Ҵ�" << endl;
//		name = new char[strlen(s.name) + 1];
//		strcpy(name, s.name);
//		number = s.number;
//	}
//	~Student()
//	{
//		cout << "�޸� �Ҹ�" << endl;
//		delete[] name;
//	}
//};
//int main()
//{
//	Student s1("park", 20100001);
//	Student s2(s1);
//	return 0;
//}
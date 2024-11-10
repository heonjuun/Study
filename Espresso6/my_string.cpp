#include<iostream>
using namespace std;

class MyString
{
private:
	char* pBuf;

public:
	MyString(const char* s = NULL);
	MyString(MyString& s);
	~MyString();
	void print();
	int getSize();
};

MyString::MyString(const char* s)
{
	if (s == NULL)
	{
		pBuf = new char[1];
		pBuf[0] = NULL;
	}
	else
	{
		pBuf = new char[::strlen(s) + 1];
		strcpy(pBuf, s);
	}
}

MyString::MyString(MyString& s)
{
	pBuf = new char[s.getSize() + 1];
	strcpy(pBuf, s.pBuf);
}

MyString::~MyString()
{
	if (pBuf)
		delete[] pBuf;
}

void MyString::print()
{
	cout << pBuf << endl;
}

int MyString::getSize()
{
	return strlen(pBuf);
}
int main()
{
	MyString str1;
	MyString str2("Hello");
	MyString str3 = "World!";
	MyString str4(str3);

	str1.print();
	str2.print();
	str3.print();
	str4.print();

	return 0;
}

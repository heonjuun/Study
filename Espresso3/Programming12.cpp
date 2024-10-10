#include<iostream>
using namespace std;

int main()
{
	char a[100];

	for (int i = 0; i < sizeof(a); i++)
	{
		if (a-1 != ".") {
			a[i] += '.';
		}

	}
	

	return 0;
}
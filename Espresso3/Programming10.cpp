#include<iostream>
using namespace std;

int* search(int* a, int n, int x)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)
		{
			return &a[i];
		}
		
	}
	return nullptr;
}
int main()
{
	int a[] = { 1,2,3,4,5 };
	int n = sizeof(a) / sizeof(a[0]);
	int x;
	cout << "ã����� �� :";
	cin >> x;
	
	int* result = search(a, n, x);

	
	if (result != nullptr) {
		cout << "ã�� ��: " << *result << ", �ּ�: " << result << endl;
	}
	else {
		cout << "���� ã�� ���߽��ϴ�." << endl;
	}


	return 0;
}
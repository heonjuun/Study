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
	cout << "찾고싶은 값 :";
	cin >> x;
	
	int* result = search(a, n, x);

	
	if (result != nullptr) {
		cout << "찾은 값: " << *result << ", 주소: " << result << endl;
	}
	else {
		cout << "값을 찾지 못했습니다." << endl;
	}


	return 0;
}
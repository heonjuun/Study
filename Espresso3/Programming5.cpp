#include<iostream>
using namespace std;

int main()
{
	int i, j;
	int matrix[3][5] = { {12,56,32,16,98},{99,56,34,41,3},{65,3,87,78,21} };
	int sum[3][5] = { 0 };
	int newsum[3] = { 0 };
	int sa[5] = { 0, };



	//for (i = 0; i < 3; i++)
	//{
	//	for (j = 0; j < 5; j++)
	//	{
	//		
	//		
	//	}
	//	
	//	newsum[i] = matrix[i][0] + matrix[i][1] + matrix[i][2] + matrix[i][3] + matrix[i][4];
	//	cout << newsum[i] << endl;		
	//}
	cout << endl;
	for (j = 0; j < 3; j++) {
		for (i = 0; i < 5; i++)
		{
			matrix[3][j] += matrix[i][j];			
			cout << matrix[i][j] << endl;

		}
		
	}

	

	return 0;
}
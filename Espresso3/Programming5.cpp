//#include<iostream>
//using namespace std;
////다음 표의 각 행의 합계, 각 열의 합계를 구하는 프로그램을 작성해라 .표는 2차원의 배열을 활용할것
//int main()
//{
//	int i, j;
//	int matrix[3][5] = { {12,56,32,16,98},{99,56,34,41,3},{65,3,87,78,21} };
//	int sum[3][5] = { 0 };
//	int newsum[3] = { 0 };
//	int sa[5] = { 0};
//
//	
//
//
//
//	for (i = 0; i < 3; i++)
//	{ //행
//		for (j = 0; j < 5; j++)
//		{
//			sa[j] = matrix[0][j] + matrix[1][j] + matrix[2][j];
//		}				
//		newsum[i] = matrix[i][0] + matrix[i][1] + matrix[i][2] + matrix[i][3] + matrix[i][4];
//		cout << newsum[i] << endl;		
//	}
//	cout << "================" << endl;
//	 
//	for (int a = 0; a < 5; a++)
//	{ //열
//		cout << sa[a]<<endl;
//	}
//	
//
//	
//
//	return 0;
//}
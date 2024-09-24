//#include<iostream>
//using namespace std;
//const int ROWS = 3; //3행
//const int COLS = 3; // 3열 
////3x3 상수 행열블럭만들기
//
//int main()
//{
//	int A[ROWS][COLS] = {{2, 3, 0}
//						,{8, 9, 1}
//						,{7, 0, 5} };
//	int B[ROWS][COLS] = {{1, 0, 0}
//						,{1, 0, 0}
//						,{1, 0, 0} };
//	int C[ROWS][COLS];
//	int r, c; //row , column
//	for (r = 0; r < ROWS; r++) // a b행렬 덧셈
//		for (c = 0; c < COLS; c++)
//			C[r][c] = A[r][c] + B[r][c];
//
//	//행렬출력
//	for (r = 0; r < ROWS; r++)
//	{
//		for (c = 0; c < COLS; c++)
//		{
//			cout << C[r][c] << " ";
//		}
//		cout << endl;
//	}
//	return 0;
//}
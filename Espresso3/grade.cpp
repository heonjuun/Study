//#include<iostream>
//using namespace std;
//
//int main()
//{
//	//cons는 선언시 값을 무조건 초기화시켜줘야함
//	const int STUDENTS = 10;//학생 10명분의 성적을 내기 위해 상수로 선언
//	int grade[STUDENTS]; //성적을 내는 grade변수에 0부터 9까지 배열형태로 담았음
//	int sum = 0; //성적 합
//	int i, average; //평균
//
//	for (i = 0; i < STUDENTS; i++) //성적을 담기위한 반복문
//	{ 
//		cout << "학생들의 성적 입력:";
//		cin >> grade[i];
//	}
//	
//	for (i = 0; i < STUDENTS; i++)
//		sum += grade[i];
//	average = sum / STUDENTS;
//	cout << "성적 평균=" << average << endl;
//
//	return 0;
//}
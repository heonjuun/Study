//#include<iostream>
//using namespace std;
//
//int main()
//{
//	const int MAX_SIZE = 100;
//	int* pi; //동적 메모리를 가리키는 포인터
//
//	pi = (int*)malloc(MAX_SIZE * sizeof(int)); //동적 메모리 할당
//
//	for (int i = 0; i < MAX_SIZE; i++){
//		*pi = 0; //100개의 정수공간할당
//		cout << *pi;
//	}
//	free(pi);
//	return 0;
//
//}
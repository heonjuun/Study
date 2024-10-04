//#include<iostream>
//using namespace std;
//
//void SwapIC(int num1, int num2)
//{
//	int temp = num1;
//	num1 = num2;
//	num2 = temp;
//}
//void Swap1(int* num1, int* num2)
//{
//	int temp = *num1;
//	*num1 = *num2;
//	*num2 = temp;
//}
//void Swap2(int& num1, int& num2)
//{
//	int temp = num1;
//	num1 = num2;
//	num2 = temp;
//
//}
//int main()
//{
//	int p1 = 20;
//	int p2 = 5;
//
//	SwapIC(p1, p2);
//	std::cout << "p1의 값은?: " << p1 << std::endl;
//	std::cout << "p2의 값은?: " << p2 << std::endl;
//
//	Swap1(&p1, &p2); // 주소에 의한 호출
//	std::cout << "p1의 값은?: " << p1 << std::endl;
//	std::cout << "p2의 값은?: " << p2 << std::endl;
//
//	Swap2(p1, p2); // 참조에 의한 호출
//	std::cout << "p1의 값은?: " << p1 << std::endl;
//	std::cout << "p2의 값은?: " << p2 << std::endl;
//
//}
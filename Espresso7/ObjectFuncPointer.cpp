//#include<iostream>
//#include<string>
//using namespace std;
//
//class Car {
//	int speed;
//	int gear;
//	string color;
//public:
//	Car(int s = 0, int g = 1, string c = "white") :speed(s), gear(g), color(c) {}
//	void print()
//	{
//		cout << "�ӵ�:" << speed << " ���:" << gear << " ����:" << color << endl;
//	}
//};
//void swapObjects(Car c1, Car c2)
//{
//	Car tmp;
//	tmp = c1;
//	c1 = c2;
//	c2 = tmp;
//}
//Car createCar()
//{
//	Car tmp(0, 1, "metal");
//	return tmp;
//}
//void swapObjects(Car* p1, Car* p2)
//{
//	Car tmp;
//	tmp = *p1;
//	*p1 = *p2;
//	*p2 = tmp;
//}
//
//int main()
//{
//	Car red(0, 1, "red");
//	Car blue(0, 1, "blue");
//	swapObjects(&red, &blue);
//	red.print();
//	blue.print();
//	return 0;
//}
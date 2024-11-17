//#include<iostream>
//#include<string>
//using namespace std;
//
//class Car {
//	int speed;
//	int gear;
//	string color;
//public:
//
//	static int count;
//	Car(int s = 0, int g = 0, string c = "panda") :speed(s), gear(g), color(c) {
//		count++;
//	}
//	~Car()
//	{
//		count--;
//	}
//};
//int Car::count = 0;
//int main()
//{
//	cout << "지금까지 생성된 자동차 수=" << Car::count << endl;
//	Car c1(100, 0, "blue");
//	Car c2(0, 0, "white");
//	cout << "지금까지 생성된 자동차 수=" << Car::count << endl;
//	Car c3(0, 0, "red");
//	cout << "지금까지 생성된 자동차 수=" << c1.count << endl;
//	cout << "지금까지 생성된 자동차 수=" << c3.count << endl;
//	
//	return 0;
//}
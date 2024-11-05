//#include<iostream>
//#include<string>
//using namespace std;
//class Car {
//	int speed;
//	int gear;
//	char* color;
//public:	
//
//	Car(int s, int g, const char* c)
//	{
//		cout << "생성자 호출" << endl;
//		speed = s;
//		gear = g;
//		color = new char[strlen(c)+1];
//		strcpy(color, c);
//	}
//	
//	~Car() //소멸
//	{
//		cout << "소멸자 호출" << endl;
//		delete [] color;
//	}
//	
//};
//int main()
//{	
//	Car c1(0,1, "yellow");
//	return 0;
//}
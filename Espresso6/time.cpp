//#include<iostream>
//using namespace std;
//class Time {
//private:
//	int hour;
//	int minute;
//	int second;
//public:
//	Time();
//	Time(int h, int m, int s);
//	void setTime(int h, int m, int s);
//	void print();
//};
//
//
//Time::Time()
//{
//	setTime(0, 0, 0);
//}
//
//Time::Time(int h, int m, int s)
//{
//	
//	setTime(h, m, s);
//}
//
//void Time::setTime(int h, int m, int s)
//{
//	hour = ((h >= 0 && h < 24) ? h : 0);
//	minute = ((m >= 0 && m < 60) ? m : 0);
//	second = ((s >= 0 && s < 60) ? s : 0);
//}
//
//void Time::print()
//{
//	cout << hour << ":" << minute << ":" << second << endl;
//}
//
//int main()
//{
//	Time time1;
//	cout << "�⺻ ������ ȣ�� �� �ð� : ";
//	time1.print();
//
//	Time time2(13,27,6);
//	cout << "�ι�° ������ ȣ�� �� �ð� : ";
//	time2.print();
//
//	Time time3(99, 99, 99);
//	cout << "�ùٸ��� ���� ������ �� �ð� : ";
//	time3.print();
//
//	return 0;
//
//}

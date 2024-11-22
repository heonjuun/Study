#include<iostream>
#include<string>
using namespace std;
class Time {
private:
	int time;
	int minute;
	int second;
public:
	Time();
	Time(int t, int m, int s);
	void print();
};

Time::Time()
{
	time = 0;
	minute = 0;
	second = 0;
}

Time::Time(int t, int m, int s)
{
	time = t;
	minute = m;
	second = s;
}

void Time::print()
{
	cout << time << "��" << minute << "��" << second << "��\n";
}
class AlarmClock
{
private:
	Time currentTime;
	Time alarmTime;
public:
	AlarmClock(Time a, Time c);
	void print();
};

AlarmClock::AlarmClock(Time a, Time c)
{
	alarmTime = a;
	currentTime = c;
}

void AlarmClock::print()
{
	cout << "����ð�:";
	currentTime.print();
	cout << "�˶� �ð�:";
	alarmTime.print();
}
int main()
{
	Time alarm(6, 0, 0);
	Time current(12, 56, 34);
	AlarmClock c(alarm, current);
	c.print();

	
	
	return 0;
}

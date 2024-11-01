#include<iostream>
using namespace std;

class Dice {
private:
	int face;
public:
	Dice();
	~Dice();
	void Role();


};

Dice::Dice():face(0)
{
  
}

Dice::~Dice()
{
}

void Dice::Role()
{
	srand(time(NULL));
	face = ((int)(rand)() % 6 + 1);
	cout << face << endl;
}
int main()
{
	Dice First;
	First.Role();
	return 0;
}

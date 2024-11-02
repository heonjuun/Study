#include<iostream>
using namespace std;

class CellPhone
{
private:
	string Model;
	string Company;
	int Power;
	int Camera;
public:
	CellPhone();
	~CellPhone();
	void SetModel(string x);
	void SetCompany(string x);
	void SetPower(int x);
	void SetCamera(int x);
	void GetModel();
	void GetCompany();
	void GetPower();
	void GetCamera();

};
CellPhone::CellPhone()
	:Model(""), Company(""), Power(0), Camera(0)
{}
CellPhone::~CellPhone()
{}
void CellPhone::SetModel(string x)
{
	this->Model = x;
}
void CellPhone::SetCompany(string x)
{
	this->Company = x;
}
void CellPhone::SetPower(int x)
{
	this->Power = x;
}
void CellPhone::SetCamera(int x)
{
	this->Camera = x;
}
void CellPhone::GetModel()
{
	cout << this->Model << endl;
}
void CellPhone::GetCompany()
{

	cout << this->Company << endl;
}
void CellPhone::GetPower()
{
	if (this->Power == 0)
	{
		cout << "전원이 꺼졌습니다." << endl;
	}
	else
	{
		cout << "전원이 켜졌습니다." << endl;
	}

}
void CellPhone::GetCamera()
{
	if (this->Camera == 0)
	{
		cout << "카메라가 없습니다." << endl;
	}
	else
	{
		cout << "카메라가 있습니다." << endl;
	}
}
int main()
{
	CellPhone phone;
	phone.SetCamera(0); //0: 없음 1:있음
	phone.SetCompany("SANSUNG");
	phone.SetModel("GALAXY");
	phone.SetPower(1); //0: 없음 1:있음
	phone.GetCompany();
	phone.GetModel();
	phone.GetCamera();
	phone.GetPower();
	return 0;
}
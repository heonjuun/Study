//#include<iostream>
//using namespace std;
//	char x[3][3] = { {' ',' ',' '},{' ',' ',' '},{' ',' ',' '} };
//void print_array()
//{
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			cout << "|" << x[i][j];
//		}
//		cout << endl;
//	}
//}
//
//bool win()
//{
//	for (int i = 0; i < 3; i++)
//	{
//		if (x[i][0] != ' ' &&
//			x[i][0] == x[i][1] &&
//			x[i][1] == x[i][2]) {
//			return true;
//		}
//	}
//	for (int i = 0; i < 3; i++) {
//		if (x[0][i] != ' ' &&
//			x[0][i] == x[1][i] &&
//			x[1][i] == x[2][i]) {
//
//			return true;
//		}
//	}
//	if (x[0][0] != ' ' &&
//		x[0][0] == x[1][1] && x[1][1] == x[2][2]) {
//		return true;
//	}
//	if (x[0][2] != ' ' &&
//		x[0][2] == x[1][1] && x[1][1] == x[2][0]) {
//		return true;
//	}
//	return false;
//
//}
//
//
//
//int main()
//{
//	int location_x;
//	int location_y;
//	int ping_pong=0;
//	print_array();
//	for (int i = 0; i < 9; i++) {
//		cout << "x ��ǥ �Է�: " << endl;
//		cin >> location_x;
//		cout << "y ��ǥ �Է�: " << endl;
//		cin >> location_y;
//
//		if (ping_pong == 0) {
//			x[location_x][location_y] = 'O';
//			ping_pong = 1;
//			print_array();
//			if (win() == true) {
//				cout << "O �� �̱�" << endl;
//				exit(1);
//			}
//		}
//		else {
//			x[location_x][location_y] = 'X';
//			ping_pong = 0;
//			print_array();
//			if (win() == true) {
//				cout << "X �� �̱�" << endl;
//				exit(1);
//			}
//		}
//	}
//	cout << "���º��Դϴ�." << endl;
//
//	
//
//
//
//	return 0;
//}
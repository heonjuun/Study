//#include<iostream>
//#include<string>  
//using namespace std;
//
//int main()
//{
//    string s;
//    string find;
//    string replace1;
//
//    // ���ڿ� �Է�
//    cout << "���ڿ��� �Է��ϼ���: ";
//    getline(cin, s);  // std::string�� �Է¹ޱ�
//
//    // ã�� ���ڿ� �Է�
//    cout << "ã�� ���ڿ�: ";
//    getline(cin, find);
//
//    // �ٲ� ���ڿ� �Է�
//    cout << "�ٲ� ���ڿ�: ";
//    getline(cin, replace1);
//
//    // ���ڿ� ã�� �� ġȯ
//    size_t pos = s.find(find);  // find() �Լ��� ��ġ ã��
//    if (pos != string::npos)  // ���ڿ��� �߰ߵ� ��쿡��
//    {
//        s.replace(pos, find.length(), replace1);  // replace() �Լ��� ���ڿ� ��ü
//    }
//
//    // ��� ���
//    cout << "���: " << s << endl;
//
//    return 0;
//}
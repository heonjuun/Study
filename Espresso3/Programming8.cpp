//#include<iostream>
//using namespace std;
//
//int main()
//{
//
//    int subject[5][3] = { 0 };
//
//    for (int i = 0; i < 5; i++)
//    {
//        cout << "�й�" << i + 1 << "�����Է�: " << endl;
//        for (int j = 0; j < 3; j++)
//        {
//            cout << "����" << j + 1 << ":";
//            cin >> subject[i][j];
//        }
//    }
//    cout << "\n�������" << endl;
//
//    for (int i = 0; i < 5; i++)
//    {
//        cout << "�й�:" << i + 1 << ":";
//
//        for (int j = 0; j < 3; j++)
//        {
//            cout << subject[i][j] << " ";
//
//        }
//        cout << endl;
//    }
//    for (int j = 0; j < 3; j++)
//    {
//        int max = subject[0][j];
//        int min = subject[0][j];
//        int sum = 0;
//        for (int i = 0; i < 5; i++)
//        {
//            if (subject[i][j] > max)
//                max = subject[i][j];
//            if (subject[i][j] < min)
//                min = subject[i][j];
//            sum += subject[i][j];
//        }
//        double avg = static_cast<double>(sum) / 5;
//        cout << "���� " << j + 1 << "�� �ְ� ����: " << max << endl;
//        cout << "���� " << j + 1 << "�� ���� ����: " << min<< endl;
//        cout << "���� " << j + 1 << "�� ��� ����: " << avg<< endl;
//        cout << "---------------------------------" << endl;
//
//    }
//
//    for (int i = 0; i < 5; i++) // �� �л��� ����
//    {
//        int maxScore = subject[i][0];
//        int minScore = subject[i][0];
//        int sumScore = 0;
//
//        for (int j = 0; j < 3; j++) // 3���� ���� ���� Ȯ��
//        {
//            if (subject[i][j] > maxScore)
//                maxScore = subject[i][j];
//            if (subject[i][j] < minScore)
//                minScore = subject[i][j];
//            sumScore += subject[i][j];
//        }
//
//        double avgScore = static_cast<double>(sumScore) / 3; // ��� ���
//
//        cout << "�й� " << i + 1 << "�� �ְ� ����: " << maxScore << endl;
//        cout << "�й� " << i + 1 << "�� ���� ����: " << minScore << endl;
//        cout << "�й� " << i + 1 << "�� ��� ����: " << avgScore << endl;
//        cout << "---------------------------------" << endl;
//    }
//
//
//
//}
//
//

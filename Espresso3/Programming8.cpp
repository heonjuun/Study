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
//        cout << "학번" << i + 1 << "점수입력: " << endl;
//        for (int j = 0; j < 3; j++)
//        {
//            cout << "과목" << j + 1 << ":";
//            cin >> subject[i][j];
//        }
//    }
//    cout << "\n점수목록" << endl;
//
//    for (int i = 0; i < 5; i++)
//    {
//        cout << "학번:" << i + 1 << ":";
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
//        cout << "과목 " << j + 1 << "의 최고 점수: " << max << endl;
//        cout << "과목 " << j + 1 << "의 최저 점수: " << min<< endl;
//        cout << "과목 " << j + 1 << "의 평균 점수: " << avg<< endl;
//        cout << "---------------------------------" << endl;
//
//    }
//
//    for (int i = 0; i < 5; i++) // 각 학생에 대해
//    {
//        int maxScore = subject[i][0];
//        int minScore = subject[i][0];
//        int sumScore = 0;
//
//        for (int j = 0; j < 3; j++) // 3개의 과목 점수 확인
//        {
//            if (subject[i][j] > maxScore)
//                maxScore = subject[i][j];
//            if (subject[i][j] < minScore)
//                minScore = subject[i][j];
//            sumScore += subject[i][j];
//        }
//
//        double avgScore = static_cast<double>(sumScore) / 3; // 평균 계산
//
//        cout << "학번 " << i + 1 << "의 최고 점수: " << maxScore << endl;
//        cout << "학번 " << i + 1 << "의 최저 점수: " << minScore << endl;
//        cout << "학번 " << i + 1 << "의 평균 점수: " << avgScore << endl;
//        cout << "---------------------------------" << endl;
//    }
//
//
//
//}
//
//

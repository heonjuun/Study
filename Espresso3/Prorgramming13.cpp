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
//    // 문자열 입력
//    cout << "문자열을 입력하세요: ";
//    getline(cin, s);  // std::string에 입력받기
//
//    // 찾을 문자열 입력
//    cout << "찾을 문자열: ";
//    getline(cin, find);
//
//    // 바꿀 문자열 입력
//    cout << "바꿀 문자열: ";
//    getline(cin, replace1);
//
//    // 문자열 찾기 및 치환
//    size_t pos = s.find(find);  // find() 함수로 위치 찾기
//    if (pos != string::npos)  // 문자열이 발견된 경우에만
//    {
//        s.replace(pos, find.length(), replace1);  // replace() 함수로 문자열 교체
//    }
//
//    // 결과 출력
//    cout << "결과: " << s << endl;
//
//    return 0;
//}
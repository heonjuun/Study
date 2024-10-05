//#include<iostream>
//using namespace std;
//
//// 배열 A를 배열 B로 복사하는 함수
//void copy(int* A, int* B, int n) {
//    for (int i = 0; i < n; i++) {
//        B[i] = A[i]; // 배열 A의 값을 배열 B로 복사
//    }
//}
//
//int main()
//{
//    // 테스트할 배열
//    int a[] = { 1, 2, 3, 4, 5 };  // 복사할 배열 A
//    int n = sizeof(a) / sizeof(a[0]); // 배열 A의 크기 계산
//
//    int b[5]; // 복사될 배열 B
//
//    // 배열 A를 배열 B로 복사
//    copy(a, b, n);
//
//    // 배열 B 출력 (복사가 잘 되었는지 확인)
//    cout << "배열 B의 값: ";
//    for (int i = 0; i < n; i++) {
//        cout << b[i] << " ";
//    }
//
//    return 0;
//}
//#include<iostream>
//using namespace std;
//
//// �迭 A�� �迭 B�� �����ϴ� �Լ�
//void copy(int* A, int* B, int n) {
//    for (int i = 0; i < n; i++) {
//        B[i] = A[i]; // �迭 A�� ���� �迭 B�� ����
//    }
//}
//
//int main()
//{
//    // �׽�Ʈ�� �迭
//    int a[] = { 1, 2, 3, 4, 5 };  // ������ �迭 A
//    int n = sizeof(a) / sizeof(a[0]); // �迭 A�� ũ�� ���
//
//    int b[5]; // ����� �迭 B
//
//    // �迭 A�� �迭 B�� ����
//    copy(a, b, n);
//
//    // �迭 B ��� (���簡 �� �Ǿ����� Ȯ��)
//    cout << "�迭 B�� ��: ";
//    for (int i = 0; i < n; i++) {
//        cout << b[i] << " ";
//    }
//
//    return 0;
//}
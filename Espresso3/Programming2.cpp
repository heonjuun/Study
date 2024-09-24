//#include<iostream>
//#include<vector>
//using namespace std;
//
//// 두벡터를 더하는 함수
//std::vector<int> vector_add(const std::vector<int>& vec1, const std::vector<int>& vec2)
//{
//	if (vec1.size() != vec2.size())
//	{
//		std::cerr << "Error:vectors must be of the same size!" << std::endl;
//		return{};
//	}
//	std::vector<int> result(vec1.size());
//	for (size_t i = 0; i < vec1.size(); ++i) {
//		result[i] = vec1[i] + vec2[i];
//	}
//	return result;
//}
//
////메인함수에서 테스트
//int main()
//{
//	std::vector<int> vec1 = { 1,2,3 };
//	std::vector<int>vec2 = { 4,5,6 };
//
//	std::vector<int>result = vector_add(vec1, vec2);
//
//	if (!result.empty())
//	{
//		std::cout << "Result Of Vector addition: ";
//		for (int num : result) {
//			std::cout << num << " ";
//		}
//		std::cout << std::endl;
//	}
//}
//

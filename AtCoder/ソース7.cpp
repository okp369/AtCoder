//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main() {
//	int N, K;
//	cin >> N >> K;
//
//	vector<vector<int>> A(N, vector<int>(3));
//
//	vector<int> sum_array(N);
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			cin >> A[i][j];
//			sum_array[i] += A[i][j];
//		}
//	}
//
//	for (int i = 0; i < N; i++)
//	{
//		int sum = sum_array[i];
//		int goal = K - 1; // 目標順位(0スタート)
//
//		vector<int> COPY(N);
//		COPY = sum_array;
//		COPY[i] += 100;
//		int me = COPY[i];
//
//		sort(COPY.begin(), COPY.end());
//		reverse(COPY.begin(), COPY.end());
//
//		if (COPY[goal] == me)
//		{
//			cout << "Yes" << endl;
//		}
//		else {
//			cout << "No" << endl;
//		}
//	}
//}
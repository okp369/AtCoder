//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main() {
//
//	long long ans = 0;
//	const long long LIMIT = 5;
//	long long gram = 0;
//
//	long long N, W;
//	cin >> N >> W;
//
//	vector<vector<long long>> A(N, vector<long long>(2));
//
//	for (long long i = 0; i < N; i++)
//	{
//		cin >> A[i][0];
//		cin >> A[i][1];
//	}
//
//	sort(A.begin(), A.end());
//	reverse(A.begin(), A.end());
//
//	for (vector<long long> x : A)
//	{
//		for (long long i = 0; i < x[1]; i++)
//		{
//			if (gram >= W)
//			{
//				continue;
//			}
//			ans += x[0];
//			++gram;
//		}
//	}
//
//	cout << ans << endl;
//}
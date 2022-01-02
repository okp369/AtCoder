//#include <iostream>
//#include <vector>
//using namespace std;
//
//vector<vector<long long>> a;
//long long ans = 0;
//long long N, X;
//
//void dfs(long long index, long long seki) {
//	if (index >= N)
//	{
//		if (seki == X) {
//			++ans;
//		}
//		return;
//	}
//
//	for (long long val : a[index]) {
//		if (seki * val > X)
//		{
//			continue;
//		}
//
//		dfs(index + 1, seki * val);
//	}
//}
//
//int main() {
//	cin >> N >> X;
//
//	a.resize(N);
//
//	for (long long i = 0; i < N; i++)
//	{
//		long long L;
//		cin >> L;
//
//		a[i].resize(L);
//		
//		for (long long j = 0; j < L; j++)
//		{
//			cin >> a[i][j];
//		}
//	}
//
//	dfs(0, 1);
//
//	cout << ans << endl;
//}
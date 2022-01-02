//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main() {
//	int N ;
//	int t1 = 0;
//	int t2 = 0;
//	cin >> N;
//	vector<int> t(N);
//	int ans = 1e9;
//
//	for (int i = 0; i < N; i++)
//	{
//		cin >> t[i];
//	}
//	// 2択が4回だから全部で16通り
//	// 0->t2 1->t1と考えると以下の16通り
//	/*0000
//    0001
//	0010
//	0011
//	0100
//	0101
//	0110
//	0111
//	1000
//	1001
//	1010
//	1011
//	1100
//	1101
//	1110
//	1111*/
//	// これらを全パターンbit全探索で検証していく
//
//	for (int i = 0; i < (1 << N); i++)
//	{
//		t1 = 0;
//		t2 = 0;
//		for (int j = 0; j < N; j++)
//		{
//			if (i & (1 << j))
//			{
//				t1 += t[j];
//			}
//			else 
//			{
//				t2 += t[j];
//			}
//		}
//		ans = min(ans, max(t1, t2));
//	}
//
//	cout << ans << endl;
//}
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main() {
//	int N;
//	cin >> N;
//
//	vector<vector<double>> A(N, vector<double>(2));
//
//	double length = 0;
//
//	double sum = 0;
//
//	for (int i = 0; i < N; i++)
//	{
//		cin >> A[i][0] >> A[i][1];
//		sum += A[i][0] / A[i][1];
//		length += A[i][0];	
//	}
//
//	double xt = sum / 2; // xt秒後に中間地点にたどり着く
//
//	double ans = 0;
//	for (int i = 0; i < N; i++)
//	{
//		double it = A[i][0] / A[i][1]; // i区間はit秒で通り過ぎる
//		if (it > xt) { // it秒経ってしまうと、中間地点を超えてしまうとき
//			ans += xt * A[i][1]; // 残された秒数xt * i区間の秒速 = 残された秒数でi区間を進む距離
//			break;
//		}
//		
//		xt -= it; // xt秒から、i区間を通り過ぎるのにかかった秒数を引いていく　これが0になったときが中間地点上にいるとき。
//		ans += A[i][0]; // 通り過ぎたi区間の長さを足していく
//	}
//	
//	cout << ans << endl;
//}
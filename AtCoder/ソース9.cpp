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
//	double xt = sum / 2; // xt�b��ɒ��Ԓn�_�ɂ��ǂ蒅��
//
//	double ans = 0;
//	for (int i = 0; i < N; i++)
//	{
//		double it = A[i][0] / A[i][1]; // i��Ԃ�it�b�Œʂ�߂���
//		if (it > xt) { // it�b�o���Ă��܂��ƁA���Ԓn�_�𒴂��Ă��܂��Ƃ�
//			ans += xt * A[i][1]; // �c���ꂽ�b��xt * i��Ԃ̕b�� = �c���ꂽ�b����i��Ԃ�i�ދ���
//			break;
//		}
//		
//		xt -= it; // xt�b����Ai��Ԃ�ʂ�߂���̂ɂ��������b���������Ă����@���ꂪ0�ɂȂ����Ƃ������Ԓn�_��ɂ���Ƃ��B
//		ans += A[i][0]; // �ʂ�߂���i��Ԃ̒����𑫂��Ă���
//	}
//	
//	cout << ans << endl;
//}
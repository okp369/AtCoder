#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>
using namespace std;
typedef long long ll;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {	

	vector<int> v = { 0,0,0,1,1,1,4,4,4 };
	// | 0 | 0 | 0 | 1 | 1 | 1 | 4 | 4 | 4 |
	// 0   1   2   3   4   5   6   7   8   9

	// lower_bound �w�肳�ꂽ�v�f�ȏ�̒l�������ŏ��̈ʒu�̃C�e���[�^���擾����B X�͊܂�(X�ȏ�)
	cout << lower_bound(v.begin(), v.end(), 2) - v.begin() << endl; // 6	
	cout << lower_bound(v.begin(), v.end(), 1) - v.begin() << endl; // 3	
	cout << lower_bound(v.begin(), v.end(), 5) - v.begin() << endl; // 9	
	cout << lower_bound(v.begin(), v.end(), -1) - v.begin() << endl;// 0	
	cout << lower_bound(v.begin(), v.end(), 4) - v.begin() << endl; // 6	
	cout << lower_bound(v.begin(), v.end(), 0) - v.begin() << endl; // 0

	// upper_bound �w�肳�ꂽ�v�f���傫���l�������ŏ��̈ʒu�̃C�e���[�^���擾����B X�͊܂܂Ȃ�(X���傫��)
	cout << upper_bound(v.begin(), v.end(), 2) - v.begin() << endl; // 6
	cout << upper_bound(v.begin(), v.end(), 1) - v.begin() << endl; // 6
	cout << upper_bound(v.begin(), v.end(), 5) - v.begin() << endl; // 9
	cout << upper_bound(v.begin(), v.end(), -1) - v.begin() << endl;// 0 
	cout << upper_bound(v.begin(), v.end(), 4) - v.begin() << endl; // 9
	cout << upper_bound(v.begin(), v.end(), 0) - v.begin() << endl; // 3
}

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
	int n;
	cin >> n;
	vector<vector<int>> idx(n + 1);
	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		idx[a].push_back(i);
	}
	int q;
	cin >> q;
	while (q--) {
		int l, r, x;
		cin >> l >> r >> x;
		auto a = lower_bound(idx[x].begin(), idx[x].end(), r) - idx[x].begin();
		auto b = lower_bound(idx[x].begin(), idx[x].end(), l-1) - idx[x].begin();

		cout << a - b << endl;
	}
}
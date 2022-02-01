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
	int n, x, y;
	string a;
	cin >> a;
	n = a.size();
	x = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] == 'a')x++;
		else break;
	}
	y = 0;
	for (int i = n - 1; i >= 0; i--) {
		if (a[i] == 'a')y++;
		else break;
	}
	if (x == n) {
		cout << "Yes" << endl;
		return 0;
	}
	if (x > y) {
		cout << "No" << endl;
		return 0;
	}
	for (int i = x; i < (n - y); i++) {
		if (a[i] != a[x + n - y - i - 1]) {
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
	return 0;

}
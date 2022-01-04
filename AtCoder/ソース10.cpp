#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N;
	cin >> N;

	vector<vector<int>> p(N, vector<int>(2));

	for (int i = 0; i < N; i++)
	{
		p[i][1] = i + 1;
		cin >> p[i][0];
	}

	sort(p.begin(), p.end());

	for (int i = 0; i < N; i++)
	{
		cout << p[i][1] << " ";
	}
	cout << endl;
}
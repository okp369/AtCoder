#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    k -= 1;
    vector<int> sum(n);
    for (int i = 0; i < n; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        sum[i] = a + b + c;
    }

    vector<int> sumX = sum;
    sort(sumX.begin(), sumX.end());
    reverse(sumX.begin(), sumX.end());

    for (int x : sum) {
        cout << (x + 300 >= q[k] ? "Yes" : "No") << '\n';
    }
}
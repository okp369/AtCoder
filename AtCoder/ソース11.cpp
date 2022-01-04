#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    //sort(a.begin(), a.end());
    //vector<vector<int>> A(N, vector<int>(2));
    int N;
    cin >> N;
    vector<int> t(N);
    for (int i = 0; i < N; i++)
    {
        cin >> t[i];
    }
  
    int ans = 1e9;
    for (int i = 0; i < (1 << N); i++)
    {
        int t1 = 0;
        int t2 = 0;
        for (int j = 0; j < N; j++)
        {
            if (i & (1 << j)) {
                t1 += t[j];
            }
            else {
                t2 += t[j];
            }
        }
        ans = min(ans, max(t1, t2));
    }

    cout << ans << endl;
}
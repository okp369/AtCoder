#include <iostream>
using namespace std;
//-----------------------------------------------------------------
int main() {
    int D, G, p[11], c[11];
    cin >> D >> G;
    for (int i = 0; i < D; ++i) {
        cin >> p[i] >> c[i];
    }

    int ans = 1e9;
    for (int i = 0; i < (1 << D); ++i) {
        int s = 0, num = 0, rest_max = -1;
        for (int j = 0; j < D; ++j) {
            if (i & (1 << j)) {
                s += 100 * (j + 1) * p[j] + c[j];
                num += p[j];
            }
            else {
                rest_max = j;
            }
        }
        if (s < G) {
            int s1 = 100 * (rest_max + 1);
            int need = (G - s + s1 - 1) / s1;
            if (need >= p[rest_max]) {
                continue;
            }
            num += need;
        }
        ans = min(ans, num);
    }
    cout << ans << endl;
}
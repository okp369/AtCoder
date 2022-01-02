//#include <iostream>
//using namespace std;
////-----------------------------------------------------------------
//int main() {
//    int D, G, p[11], c[11];
//    cin >> D >> G;
//    for (int i = 0; i < D; ++i) {
//        cin >> p[i] >> c[i];
//    }
//
//    int ans = 1e9;
//    for (int i = 0; i < (1 << D); ++i) {
//        int s = 0;
//        int num = 0;
//        int rest_max = -1;
//        for (int j = 0; j < D; ++j) {
//            if (i & (1 << j)) {
//                s += 100 * (j + 1) * p[j] + c[j]; 
//                num += p[j];
//            }
//            else {
//                rest_max = j;
//            }
//        } 
//        if (s < G) {
//            int s1 = 100 * (rest_max + 1); // 解いてない方は1問何点？
//            int need = (G - s + s1 - 1) / s1; //　解いてない方をあと難問解く必要がある？
//            if (need >= p[rest_max]) { // 解いてない方は最大で難問解ける？
//                continue;
//            }
//            num += need;
//        }
//        ans = min(ans, num);
//    }
//    cout << ans << endl;
//}
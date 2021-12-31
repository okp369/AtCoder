#include <iostream>
#include <vector>
#include <string>
#include <cstring>
using namespace std;

typedef long long ll;
string S;
int N;
//-----------------------------------------------------------------
int main() {
    cin >> S;
    N = S.length() - 1;

    ll ans = 0;
    for (int i = 0; i < (1 << N); i++) // 4通り(0,1,2,3)
    {
        ll box = 0; // 退避box
        ll left = S[0] - '0';
        for (int j = 0; j < N; j++) // 0 ,1 -> j個目のﾌﾞﾗﾝｸ
        {
            if (i & (1 << j)) { // iの、2^jの位が1の場合だけ、左と右をくっつけるとまずい
                                // -> 左はboxに退避させ(後で足すから)、左には0を入れて、左と右をくっつけても大丈夫にする
                box += left; // 左はboxに退避
                left = 0;    // 左と右をくっつけても大丈夫にする
            }
            left = left * 10 + S[j + 1] - '0'; // どちらにせよ、左と右をくっつける
        }
        box += left;
        ans += box;
    }
    cout << ans << endl;
}
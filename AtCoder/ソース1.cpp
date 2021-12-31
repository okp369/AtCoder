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
    for (int i = 0; i < (1 << N); i++) // 4�ʂ�(0,1,2,3)
    {
        ll box = 0; // �ޔ�box
        ll left = S[0] - '0';
        for (int j = 0; j < N; j++) // 0 ,1 -> j�ڂ����ݸ
        {
            if (i & (1 << j)) { // i�́A2^j�̈ʂ�1�̏ꍇ�����A���ƉE����������Ƃ܂���
                                // -> ����box�ɑޔ�����(��ő�������)�A���ɂ�0�����āA���ƉE���������Ă����v�ɂ���
                box += left; // ����box�ɑޔ�
                left = 0;    // ���ƉE���������Ă����v�ɂ���
            }
            left = left * 10 + S[j + 1] - '0'; // �ǂ���ɂ���A���ƉE����������
        }
        box += left;
        ans += box;
    }
    cout << ans << endl;
}
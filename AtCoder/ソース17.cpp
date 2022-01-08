#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
typedef long long ll;

int main() {
    //sort(a.begin(), a.end());
    //vector<vector<int>> A(N, vector<int>(2));
    ll K;
    cin >> K;
    string ans;
    //ll cnt = 0;
    //int tmp = 0;
    vector<string> S;
    bool over = false;
    ll now = 0;
    // 答えは何桁かな？
    for(ll ss = 0; ss >= 0; ss++)
    {
        now = (1 << ss);
        if (now <= K && K < (1 << ss+1))
        {
            // 答えはi桁で確定
            ll cnt = (1 << ss); // 8スタート
            for (ll i = 0; i < (1 << ss); i++) // 全部で2のi乗通り
            {
                if (cnt == K)
                {                    
                    for (ll j = 0; j < i; j++)
                    {
                        if (i & (1 << j))
                        {
                            S.push_back("2");
                        }
                        else
                        {
                            S.push_back("0");
                        }
                    }
                    over = true;
                    break;
                }
                ++cnt;
            }
        }
        if (over)
        {
            break;
        }
    }
    if (K == 1)
    {
        cout << "2" << endl;
    }
    else {
        cout << "2";
        for (ll i = (int)S.size() - 1; i >= 0; i--)
        {
            cout << S[i];
        }
        cout << endl;
    }
}



//cout << "2";
//for (int i = 0; i < (int)S.size(); i++)
//{
//    cout << S[i];
//}
//cout << endl;
//continue;
//break;
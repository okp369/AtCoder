#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>
using namespace std;
typedef long long ll;
#define rep(i,n) for (int i = 0; i < (n); ++i)
ll n, l, w, newA, oldA, ans;

// haba�𖄂߂邽�߂ɕz���Œች���K�v��
ll nanmai(ll haba, ll w) {
    if (haba % w == 0)
    {
        return haba / w;
    }
    else 
    {
        return haba / w + 1;
    }
}

int main() {
    //sort(a.begin(), a.end());
    //vector<vector<int>> A(N, vector<int>(2));
        //map<int, vector<int>> mp;  ->  mp[a].push_back(i+1);
    //map<string, int> s; s[title] += 1; for (pair<string,int> val : s){} cnt = max(cnt, val.second);
    ans = 0;
    oldA = 0;
    cin >> n >> l >> w;
    
    for (ll i = 0; i < n; i++)
    {
        cin >> newA;
        // 1��(����)
        if (i == 0 && newA != 0)
        {
            ans += nanmai(newA, w);
        }

        // �����ȑO�ŕz���[�Ă�K�v������Ƃ�
        else if (newA - (oldA + w) > 0)
        {
            ans += nanmai(newA - (oldA + w), w);
        }

        // �Ō�̏ꍇ�A�����ȍ~�̏��������ďI���
        if (i == n - 1 && l - (newA + w) > 0)
        {
            ans += nanmai(l - (newA + w), w);
        }

        // �K�v
        oldA = newA;
    }

    cout << ans << endl;
}
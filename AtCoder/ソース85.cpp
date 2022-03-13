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
    //sort(a.begin(), a.end());
    //vector<vector<int>> A(N, vector<int>(2));
        //map<int, vector<int>> mp;  ->  mp[a].push_back(i+1);
    //map<string, int> s; s[title] += 1; for (pair<string,int> val : s){} cnt = max(cnt, val.second);
    int n;
    cin >> n;
    map<int, string> mp;
    map<int, string> mp2;
    map<int, string> mp3;
    string s;
    cin >> s;
    rep(i, n) {
        mp[i] = s[i];
    }

    int cnt2 = 0;
    // 1.全てのAをBBに置き換える
    for (int i = 0; i < n; ++i) {
        if (mp[i] == "A")
        {
            mp2[cnt2] = "B";
            mp2[cnt2 + 1] = "B";
            ++cnt2;
        }
        else if (mp[i] == "B") {
            mp2[cnt2] = "B";
        }
        else {
            mp2[cnt2] = "C";
        }
        ++cnt2;
    }

    // 2.左から、BBなっているところはAに置き換える。
    int cnt3 = 0;
    bool wasB = false;
    int const SIZE = mp2.size();
    rep(i, SIZE) {
        if (mp2[i] == "B") {
            if (wasB) {
                mp3[cnt3] = "A";
                ++cnt3;                
                wasB = false;
            }
            else {
                wasB = true;
                if(i == SIZE - 1) mp3[cnt3] = "B";
            }
        }
        else {
            if (wasB) {
                mp3[cnt3] = "B";
                ++cnt3;
            }
            mp3[cnt3] = mp2[i];
            ++cnt3;
            wasB = false;
        }
    }

    rep(i, mp3.size()) cout << mp3[i];
}
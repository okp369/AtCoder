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
    string s1, s2, s3, t1, t2, t3;
    cin >> s1 >> s2 >> s3 >> t1 >> t2 >> t3;

    string s1x = s1;
    string t1x = t1;
    
    string s = s1x.append(s2).append(s3);
    string t = t1x.append(t2).append(t3);

    //////////////////////////////////////
    string s2x = s2;

    string p1 = s;
    string p2 = s2x.append(s3).append(s1);
    string p3 = s3.append(s1).append(s2);

    if (t == p1 || t == p2 || t == p3) cout << "Yes" << endl;
    else cout << "No" << endl;
}
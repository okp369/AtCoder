//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <map>
//#include <set>
//using namespace std;
//typedef long long ll;
//#define rep(i,n) for (int i = 0; i < (n); ++i)
//
//int main() {
//    //sort(a.begin(), a.end());
//    //vector<vector<int>> A(N, vector<int>(2));
//        //map<int, vector<int>> mp;  ->  mp[a].push_back(i+1);
//    //map<string, int> s; s[title] += 1; for (pair<string,int> val : s){} cnt = max(cnt, val.second);
//    int n;
//    cin >> n;
//
//    int fst = 0;
//    int snd = 0;
//    map<int, bool> mp;
//
//    vector<int> a(n);
//    vector<int> b(n);
//
//    rep(i, n) {
//        int val;
//        cin >> val;
//        a[i] = val;
//
//        mp[val] = true;
//    }
//    rep(i, n) {
//        int val;
//        cin >> val;
//        b[i] = val;
//
//        if (a[i] == val) ++fst;
//        else if (mp[val]) ++snd;
//    }
//
//    cout << fst << endl;
//    cout << snd << endl;
//}
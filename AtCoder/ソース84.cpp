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
//
//    bool ok = false;
//
//    map<int, vector<int>> mp;
//    map<int, int> left;
//    map<int, int> right;
//    map<int, bool> rigthy;
//
//    int n;
//    cin >> n;
//
//    vector<pair<int, int>> vec(n);
//    rep(i, n) {
//        int x, y;
//        cin >> x >> y;
//        vec[i].first = x;
//        vec[i].second = y;
//
//        mp[y].push_back(i);
//    }
//
//    string s;
//    cin >> s;
//    vector<string> str(n);
//    int l, r;
//    rep(i, n) {
//        str[i] = s[i];
//        if (s[i] == 'L') {
//            if (left[vec[i].second] < vec[i].first) {
//                left[vec[i].second] = vec[i].first;
//            }
//        }
//        else {
//            if (!rigthy[right[vec[i].second]])
//            {
//                right[vec[i].second] = vec[i].first;
//            }
//            rigthy[right[vec[i].second]] = true;
//            if (right[vec[i].second] > vec[i].first) {
//                right[vec[i].second] = vec[i].first;
//            }
//        }
//    }
//
//    for (pair<int, int> val : right) {
//        if (val.second < left[val.first]) {
//            ok = true;
//            break;
//        }
//    }
//
//    if (ok) cout << "Yes" << endl;
//    else cout << "No" << endl;
//}

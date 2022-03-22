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
//    map<int, bool> mp;
//    rep(i, 2*n+1) {
//        mp[i] = false;
//    }
//
//    rep(i, 2*n+2) {
//        // Ç±ÇøÇÁÇÃçUåÇ
//        rep(i, 2 * n + 1) {
//            if (!mp[i]) {
//                cout << i + 1 << endl;
//                fflush(stdout);
//                mp[i] = true;
//                break;
//            }
//        }
//
//        // ëäéËÇÃçUåÇ
//        int atc;
//        cin >> atc;
//        if (atc == 0) break;
//
//        mp[atc - 1] = true;        
//    }
//}
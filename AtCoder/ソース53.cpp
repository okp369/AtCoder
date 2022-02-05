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
//    string s, copyS;
//    cin >> s;
//
//    ll saigo = s.size()-1;
//
//    // –`“ª‰½ŒÂ–Ú‚Ü‚Åa‚ª‘±‚­‚©
//    ll boutou_a = -1;
//    ll saigo_a = -1;
//    bool close = false;
//    for (ll i = 0; i < s.size()-1; i++)
//    {
//        if (s[saigo-i] == 'a') {
//            saigo_a = saigo - i;
//            if (s[i] == 'a' && !close) {
//                boutou_a = i;
//            }
//            else {
//                close = true;
//            }
//        }
//        else {
//            break;
//        }
//
//    }
//
//    string x = s.substr(boutou_a+1, saigo_a-1);
//
//    ll len = s.size();
//    
//
//    //if (s == copyS)
//    //{
//    //    cout << "Yes" << endl;
//    //}
//    //else
//    //{
//    //    cout << "No" << endl;
//    //}
//}
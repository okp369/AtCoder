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
//const int MaxA = 400;
//
//int main() {
//    //sort(a.begin(), a.end());
//    //vector<vector<int>> A(N, vector<int>(2));
//        //map<int, vector<int>> mp;  ->  mp[a].push_back(i+1);
//    //map<string, int> s; s[title] += 1; for (pair<string,int> val : s){} cnt = max(cnt, val.second);
//    int n;
//    cin >> n;
//    vector<int> a(n);
//    rep(i, n) {
//        int xx;
//        cin >> xx;
//        xx += 200;
//        a[i] = xx;
//    }
//    vector<ll> exist(401);
//    
//    ll ans = 0;
//
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j <= MaxA; j++) // 0 �`�@400 a[i]���Ƃ肤�鐔
//        {
//            if (exist[j] != 0) // �ߋ���j�Ƃ��������������ꍇ�A����2���ans�ɑ����Ȃ��Ƃ����Ȃ�
//            {
//                int sa = a[i] - j;
//                ans += sa * sa * exist[j];
//            }
//        }
//        ++exist[a[i]];
//    }
//
//    cout << ans << endl;
//    return 0;
//}
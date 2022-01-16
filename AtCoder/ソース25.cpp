//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//using namespace std;
//typedef long long ll;
//
//int main() {
//    //sort(a.begin(), a.end());
//    //vector<vector<ll>> A(N, vector<ll>(2));
//    ll N;
//    cin >> N;
//    vector<ll> A(N);
//    for (ll i = 0; i < N; i++)
//    {
//        cin >> A[i];
//    }
//
//    ll ans = 0;
//
//
//    for (ll i = 0; i < N; i++)
//    {
//        for (ll j = i + 1; j < N; j++)
//        {
//            if (A[i] != A[j])
//            {
//                ans += (A[i] - A[j]) * (A[i] - A[j]);
//            }          
//
//        }
//    }
//
//    cout << ans << endl;
//}
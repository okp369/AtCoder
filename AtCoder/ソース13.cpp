//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//using namespace std;
//typedef long long ll;
//
//int main() {
//    //sort(a.begin(), a.end());
//    //vector<vector<int>> A(N, vector<int>(2));
//    int N;
//    cin >> N;
//    vector<int> S(N);
//    for (int i = 0; i < N; i++)
//    {
//        cin >> S[i];
//    }
//
//    int ans = 0;
//    
//    for (int i = 0; i < N; i++)
//    {
//        bool cansolve = false;
//        for (int a = 1; a < 1000; a++)
//        {
//            for (int b = 1; b < 1000; b++)
//            {
//                if (4 * a * b + 3 * a + 3 * b == S[i])
//                {
//                    cansolve = true;
//                }
//            }
//        }
//        if (!cansolve)
//        {
//            ++ans;
//        }
//    }
//    cout << ans << endl;
//}
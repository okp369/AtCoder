//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//using namespace std;
//typedef long long ll;
//
//int main() {
//    //sort(a.begin(), a.end());
//    
//    int N;
//    cin >> N;
//    vector<vector<double>> X(N, vector<double>(2));
//    for (int i = 0; i < N; i++)
//    {
//        cin >> X[i][0];
//        cin >> X[i][1];
//    }
//
//    double ans = 0;
//    double tmp = 0;
//
//    for (int i = 0; i < N; i++)
//    {
//        for (int j = 0; j < N; j++)
//        {
//            if (i != j)
//            {
//                double x = X[i][0] - X[j][0];
//                x = x * x;
//                double y = X[i][1] - X[j][1];
//                y = y * y;
//                double nakami = x + y;
//                double tmp = sqrt(nakami);
//                ans = max(ans, tmp);
//            }
//        }
//    }
//
//    printf("%.10f", ans);
//}
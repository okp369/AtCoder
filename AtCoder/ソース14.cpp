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
//    ll A, B, C;
//    cin >> A >> B >> C;
//    
//    //EVEN
//    if (C%2 == 0)
//    {
//        //=
//        if (A*A == B*B) 
//        {
//            cout << "=" << endl;
//        }
//        else if (A * A > B * B)
//        {
//            cout << ">" << endl;
//        }
//        else if(A * A < B * B)
//        {
//            cout << "<" << endl;
//        }
//    }
//    //ODD
//    else
//    {
//        if (A == B)
//        {
//            cout << "=" << endl;
//        }
//        //どちらも正
//        else if (A >= 0 && B >= 0)
//        {
//            if (A < B) 
//            {
//                cout << "<" << endl;
//            }
//            else
//            {
//                cout << ">" << endl;
//            }
//        }
//        //Aだけ負
//        else if (A < 0 && B >= 0)
//        {
//            cout << "<" << endl;
//        }
//        //Bだけ負
//        else if (A >= 0 && B < 0)
//        {
//            cout << ">" << endl;
//        }
//        //どちらも負
//        else if (A < 0 && B < 0)
//        {
//            if (A < B) 
//            {
//                cout << "<" << endl;
//            }
//            else 
//            {
//                cout << ">" << endl;
//            }
//        }
//    }
//}
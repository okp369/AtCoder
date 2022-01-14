#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
typedef long long ll;

int main() {
    //sort(a.begin(), a.end());
    //vector<vector<int>> A(N, vector<int>(2));
    
    string SSS, a, b, c;
    cin >> SSS;

    a = SSS[0];
    b = SSS[1];
    c = SSS[2];

    if (a == b && b == c)
    {
        cout << "Won" << endl;
    }
    else {
        cout << "Lost" << endl;
    }
}
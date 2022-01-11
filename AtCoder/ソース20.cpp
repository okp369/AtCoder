#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
typedef long long ll;

int main() {
    //sort(a.begin(), a.end());
    //vector<vector<int>> A(N, vector<int>(2));
    string S;
    cin >> S;

    int length = S.size();
    if (S[length] == 'r')
    {
        cout << "er" << endl;
    }
    else {
        cout << "ist" << endl;
    }
}
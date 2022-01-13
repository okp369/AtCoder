#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
typedef long long ll;

int main() {
    //sort(a.begin(), a.end());
    //vector<vector<int>> A(N, vector<int>(2));
    ll N;
    cin >> N;

    string ans;

    if (N == 1) {
        cout << "A" << endl;
    }
    else {
        // N ‚ğ‹ô”‚É‚·‚éB
        if (N % 2 == 0)
        {
            N /= 2;
            ans.push_back('B');
        }
        else
        {
            N -= 1;
            ans.push_back('A');
        }

        while (N > 1)
        {
            //Šï”‚È‚ç‹ô”‚É®‚¦‚é
            if (N % 2 != 0)
            {
                N -= 1;
                ans.push_back('A');
            }
            N /= 2;
            ans.push_back('B');
        }

        ans.push_back('A');

        reverse(ans.begin(), ans.end());

        cout << ans << endl;
    }
}
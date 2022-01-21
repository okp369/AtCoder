#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
using namespace std;
typedef long long ll;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    //sort(a.begin(), a.end());
    //vector<vector<int>> A(N, vector<int>(2));
        //map<int, vector<int>> mp;  ->  mp[a].push_back(i+1);
    //map<string, int> s; s[title] += 1; for (pair<string,int> val : s){} cnt = max(cnt, val.second);

    vector<string> a;
    a.push_back("a");
    a.push_back("b");
    a.push_back("c");
    a.push_back("d");
    a.push_back("e");
    a.push_back("f");
    a.push_back("g");
    a.push_back("h");
    a.push_back("i");
    a.push_back("j");
    a.push_back("k");
    a.push_back("l");
    a.push_back("m");
    a.push_back("n");
    a.push_back("o");
    a.push_back("p");
    a.push_back("q");
    a.push_back("r");
    a.push_back("s");
    a.push_back("t");
    a.push_back("u");
    a.push_back("v");
    a.push_back("w");
    a.push_back("x");
    a.push_back("y");
    a.push_back("z");

    vector<int> p(26);
    rep(i, 26)
    {
        int index;
        cin >> index;
        cout << a[index - 1];
    }
}
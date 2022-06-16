#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include<stdio.h>
#include<stdlib.h>
//#include<stdtime.h>

using namespace std;
typedef long long ll;
#define rep(i,n) for (int i = 0; i < (n); ++i)

int main() {
    //sort(a.begin(), a.end());
    //vector<vector<int>> A(N, vector<int>(2));
        //map<int, vector<int>> mp;  ->  mp[a].push_back(i+1);
    //map<string, int> s; s[title] += 1; for (pair<string,int> val : s){} cnt = max(cnt, val.second);

    //srand(time(NULL));
   
    int a,b,c;
    //srand((unsigned int)time(NULL));
    srand(time(NULL));
    //https://twitter.com/OptaAnalyst/status/1536804028641751040/photo/1

    a = rand() % 100;
    b = rand() % 100;
    
    cout << a << endl;
    cout << b << endl;
    

    if (b <= 18) {
        cout << "フランス" << endl;
    }
    else if(b <= 34) {
        cout << "ブラジル" << endl;
    }
    else if (b <= 46) {
        cout << "スペイン" << endl;
    }
    else if (b <= 54) {
        cout << "イングランド" << endl;
    }
    else if (b <= 62) {
        cout << "ベルギー" << endl;
    }
    else if (b <= 69) {
        cout << "オランダ" << endl;
    }
    else if (b <= 77) {
        cout << "ドイツ" << endl;
    }
    else if (b <= 82) {
        cout << "アルゼンチン" << endl;
    }
    else if (b <= 87) {
        cout << "ポルトガル" << endl;
    }
    else if (b <= 89) {
        cout << "クロアチア" << endl;
    }
    else {
        cout << "その他..." << endl;
    }

    /*cout << a << endl;*/
    //printf("%d\n", rand() % 100);

    /*printf("a=%d¥n", a);
    printf("b=%d¥n", b);
    printf("c=%d¥n", c);*/
}
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
typedef long long ll;

int main() {
    //sort(a.begin(), a.end());
    //vector<vector<int>> A(N, vector<int>(2));
    ll A, B, C;
    cin >> A >> B >> C;
    
    //EVEN
    if (C%2 == 0)
    {
        //=
        if (A*A == B*B) 
        {
            cout << "=" << endl;
        }
        else if (A > B)
        {
            cout << ">" << endl;
        }
        else if(A < B)
        {
            cout << "<" << endl;
        }
    }
    //ODD
    else
    {
        if (A == B)
        {
            cout << "=" << endl;
        }
        //�ǂ������
        if (A >= 0 && B >= 0)
        {
            if (A < B) 
            {
                cout << "<" << endl;
            }
            else
            {
                cout << ">" << endl;
            }
        }
        //A������
        if (A < 0 && B >= 0)
        {
            cout << "<" << endl;
        }
        //B������
        if (A >= 0 && B < 0)
        {
            cout << ">" << endl;
        }
        //�ǂ������
        if (A < 0 && B < 0)
        {
            if (A < B) 
            {
                cout << "<" << endl;
            }
            else 
            {
                cout << ">" << endl;
            }
        }
    }
}
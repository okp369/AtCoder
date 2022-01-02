#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;

    vector<int> A(N);
    vector<int> x(Q);

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    sort(A.begin(), A.end());

    for (int i = 0; i < Q; i++)
    {
        cin >> x[i];
    }

    for (int val : x) {
        int ite = lower_bound(A.begin(), A.end(), val) - A.begin();

        if (ite >= A.size())
        {
            cout << 0 << endl;
        }
        else {
            cout << A.size() - ite << endl;
        }
    }

}
//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <map>
//#include <set>
//using namespace std;
//typedef long long ll;
//#define rep(i,n) for (int i = 0; i < (n); ++i)
//
//int main() {
//    set<int> Set;
//    Set.insert(37); // ���̎��_�ł� Set �̗v�f�� {37}
//    Set.insert(15); // ���̎��_�ł� Set �̗v�f�� {15, 37}
//    Set.insert(37); // ���̎��_�ł� Set �̗v�f�� {15, 37}
//    Set.insert(40);
//    Set.insert(41);
//    Set.insert(400);
//    auto itr1 = Set.lower_bound(40);
//    if (itr1 == Set.end()) cout << "End" << endl;
//    else cout << (*itr1) << endl;
//    //Set.erase(37); // ���̎��_�ł� Set �̗v�f�� {15}
//    Set.insert(25); // ���̎��_�ł� Set �̗v�f�� {15, 46}
//    auto itr2 = Set.lower_bound(20);
//    if (itr2 == Set.end()) cout << "End" << endl;
//    else cout << (*itr2) << endl;
//
//    // �� 2: a[1],a[2],...,a[N] �����������ɏo�͂���i�����v�f����������ꍇ 1 �񂾂��o�͂���j
//    set<int> b; int N, a[100009];
//    cin >> N;
//    for (int i = 1; i <= N; i++) cin >> a[i];
//    for (int i = 1; i <= N; i++) b.insert(a[i]);
//    auto itr = b.begin();
//    while (itr != b.end()) {
//        cout << (*itr) << endl;
//        itr++;
//    }
//    return 0;
//}
//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//#include <map>
//using namespace std;
//typedef long long ll;
//#define rep(i,n) for (int i = 0; i < (n); ++i)
//
//std::string replaceOtherStr(std::string & replacedStr, std::string from, std::string to) {
//    const unsigned int pos = replacedStr.find(from);
//    const int len = from.length();
//
//    if (pos == std::string::npos || from.empty()) {
//        return replacedStr;
//    }
//
//    return replacedStr.replace(pos, len, to);
//}
//
//std::vector<std::string> split(std::string str, char del) {
//    int first = 0;
//    int last = str.find_first_of(del);
//
//    std::vector<std::string> result;
//
//    while (first < str.size()) {
//        std::string subStr(str, first, last - first);
//
//        result.push_back(subStr);
//
//        first = last + 1;
//        last = str.find_first_of(del, first);
//
//        if (last == std::string::npos) {
//            last = str.size();
//        }
//    }
//
//    return result;
//}
//
//int main() {
//    //sort(a.begin(), a.end());
//    //vector<vector<int>> A(N, vector<int>(2));
//    //map<int, vector<int>> mp;  ->  mp[a].push_back(i+1);
//    //map<string, int> s; s[title] += 1; for (pair<string,int> val : s){} cnt = max(cnt, val.second);
//    int n, m;
//    cin >> n >> m;
//    vector<string> s(n);
//
//    string aaa = "affh4e8vadskohl";
//    
//    string aa;
//
//    for(int i = 0; i < n;i++)
//    {
//        string val;
//        cin >> val;
//        aa.append(val + ",");
//    }
//
//   rep(i, m)
//    {
//       string sinkai;
//        cin >> sinkai;
//        replaceOtherStr(aa, sinkai, aaa);
//    }
//
//   getline(aa, ",");
//
//   /* rep(i, n)
//    {
//        if (s[i] == aaa)
//        {
//            cout << "Yes" << endl;
//        }
//        else
//        {
//            cout << "No" << endl;
//        }
//    }*/
//}
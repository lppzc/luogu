#include<bits/stdc++.h>
using namespace std;
int main() {
    string ans [] = {
        "B", // 双引号中替换为 试题 1 的答案
        "A", // 双引号中替换为 试题 2 的答案
        "8", // 双引号中替换为 试题 3 的答案
        "50", // 双引号中替换为 试题 4 的答案
        "6,5,4,3,2,1,", // 双引号中替换为 试题 5 的答案
    };
    int T;
    cin >> T;
    cout << ans[T - 1] << endl;
    return 0;
}
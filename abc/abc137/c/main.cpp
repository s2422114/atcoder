#define _GLIBCXX_DEBUG
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <queue>
#include <bitset>
#include <stack>
using namespace std;

int main() {
    // 入力
    int N;
    cin >> N;
    string s;
    map<string, int> cnt;
    for (int i = 1; i <= N; i++) {
        cin >> s;
        // 文字列をソート
        sort(s.begin(), s.end());
        cnt[s]++;
    }
    
    // 組み合わせを計算
    long long ans = 0;
    for (auto [s, c] : cnt) {
        ans += (long long)c * (c - 1) / 2;
    } 

    // 出力
    cout << ans << endl;
}

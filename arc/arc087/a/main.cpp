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
    vector<long long> a(N+1);
    for (int i = 1; i <= N; i++) cin >> a[i];

    // aのそれぞれの数字の数をカウント
    map<long long, int> cnt;
    for (int i = 1; i <= N; i++) {
        cnt[a[i]]++;
    }

    // 種類数によって場合分け
    int ans = 0;
    for (auto [x, c] : cnt) {
        // 対象の数 > 種類数
        if (x > c) {
            ans += c;
        } 
        // 対象の数 < 種類数
        else if (x < c) {
            ans += (c - x);
        }
    }

    // 出力
    cout << ans << endl;
}

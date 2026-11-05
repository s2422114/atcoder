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
    int N, Q;
    cin >> N >> Q;
    string S;
    cin >> S;
    // Sにダミーを足す
    S.insert(0, "a");

    // カウントの累積和を作る
    vector<int> cnt(N+1, 0);
    for (int i = 1; i <= N; i++) {
        cnt[i] = cnt[i-1] + ((i >= 2 && S[i] == 'C' && S[i-1] == 'A') ? 1 : 0);
    }

    // 答えを計算
    for (int i = 1; i <= Q; i++) {
        int l, r;
        int ans = 0;
        cin >> l >> r;

        ans = cnt[r] - cnt[l];
        cout << ans << endl;
    }
}

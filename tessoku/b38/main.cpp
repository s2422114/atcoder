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
using namespace std;

// デバッグ用: 配列の中身を標準エラー出力に表示
void debug(vector<int>& v) {
    for (int x : v) cerr << x << " ";
    cerr << endl;
}

int main() {
    // 入力
    int N;
    cin >> N;
    vector<char> S(N+1);
    for (int i = 1; i <= N-1; i++) cin >> S[i];

    // 左から見た上限を計算
    vector<int> L(N+1), R(N+1);
    L[1] = 1;
    R[N] = 1;

    // 左から見た上限を計算
    for (int i = 2; i <= N; i++) {
        if (S[i-1] == 'A') L[i] = L[i-1] + 1;
        else L[i] = 1;
    }   

    // 右から見た上限を計算
    for (int i = N-1; i >= 1; i--) {
        if (S[i] == 'B') R[i] = R[i+1] + 1;
        else R[i] = 1;
    } 

    // 最大値を計算
    int ans = 0;
    for (int i = 1; i <= N; i++) {
        ans += max(L[i], R[i]);
    }

    cout << ans << endl;
}

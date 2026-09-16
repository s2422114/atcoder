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

int N, A, B;
bool dp[100009];

int main() {
    // 入力
    cin >> N >> A >> B;

    // 勝者を計算
    for (int i = 0; i <= N; i++) {
        if (i >= A && dp[i-A] == false) dp[i] = true; // 勝ち
        else if (i >= B && dp[i-B] == false) dp[i] = true; // 勝ち
        else dp[i] = false; // 負け
    }

    // 出力
    if (dp[N] == true) cout << "First" << endl;
    else cout  << "Second" << endl;
    return 0;
}

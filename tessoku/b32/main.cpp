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

int N, K, a[100009];
bool dp[100009];

int main() {
    // 入力
    cin >> N >> K;
    for (int i = 1; i <= K; i++) cin >> a[i];

    // 勝者を計算
    for (int i = 0; i <= N; i++) {
        dp[i] = false;
        for (int j = 1; j <= K; j++) {
            if (i >= a[j] && dp[i-a[j]] == false) {
                dp[i] = true;
            }
        }
    }


    // 出力
    if (dp[N] == true) cout << "First" << endl;
    else cout  << "Second" << endl;
    return 0;
}

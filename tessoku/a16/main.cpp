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

int main() {
    int N, A[100009], B[100009];
    int dp[100009];

    cin >> N;
    for (int i = 2; i <= N; i++) cin >> A[i];
    for (int i = 3; i <= N; i++) cin >> B[i];

    //dp
    dp[1] = 0;
    dp[2] = A[2];
    for (int i = 3; i <= N; i++) {
        dp[i] = min(dp[i - 1] + A[i], dp[i - 2] + B[i]);
    }

    // 出力
    cout << dp[N] << endl;
    return 0;
}

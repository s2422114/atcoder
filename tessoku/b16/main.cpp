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
    int N, h[100009];
    int dp[100009];
    cin >> N;

    for (int i = 1; i <= N; i++) cin >> h[i];

    // dp
    dp[1] = 0;
    dp[2] = abs(h[2] - h[1]);

    for (int i = 3; i <= N; i++) {
        dp[i] = min(dp[i - 1] + abs(h[i] - h[i - 1]), dp[i - 2] + abs(h[i] - h[i - 2]));
    }

    cout << dp[N] << endl;
    return 0;
}

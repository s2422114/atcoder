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
    vector<int> ans;

    for (int i = 1; i <= N; i++) cin >> h[i];

    // dp
    dp[1] = 0;
    dp[2] = abs(h[2] - h[1]);

    for (int i = 3; i <= N; i++) {
        dp[i] = min(dp[i - 1] + abs(h[i] - h[i - 1]), dp[i - 2] + abs(h[i] - h[i - 2]));
    }

    // 答えの復元
    // 変数placeは現在位置
    // ゴールから始める
    int place = N;
    while (true) {
        ans.push_back(place);
        if (place == 1) break;

        if (dp[place - 1] + abs(h[place] - h[place - 1]) == dp[place]) {
            place = place - 1;
        } else {
            place = place - 2;
        }
    }

    reverse(ans.begin(), ans.end());

    // 出力
    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++) {
        if (i >= 1) cout << " ";
        cout << ans[i];
    }
    cout << endl;
    return 0;
}

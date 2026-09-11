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
    int N, S, A[69];
    bool dp[69][10009];
    vector<int> ans;

    // 入力
    cin >> N >> S;
    for (int i = 1; i <= N; i++) cin >> A[i];

    // dp（i = 0）
    dp[0][0] = true;
    for (int i = 1; i <= S; i++) dp[0][i] = false;

    // dp (i >= 1)
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j <= S; j++) {
            if (j < A[i]) {
                if (dp[i-1][j] == true) dp[i][j] = true;
                else dp[i][j] = false;
            }
            if (j >= A[i]) {
                if (dp[i-1][j] == true || dp[i-1][j-A[i]] == true) dp[i][j] = true;
                else dp[i][j] = false;
            }
        }
    }

    // 解が存在しない場合
    if (dp[N][S] == false) {
        cout << "-1" << endl;
        return 0;
    }

    //  答えの復元
    //  変数cardは現在選んでいるカード番号
    //  例えば入力例の場合、cardは3,2,1
    int i = N, j = S;
    while (i >= 1) {
        if (dp[i-1][j] == true) {
            i = i - 1;
        } else {
            ans.push_back(i);
            j = j - A[i];
            i = i - 1;
        }
    }

    reverse(ans.begin(), ans.end());

    cout << ans.size() << endl;
    for (int k = 0; k < ans.size(); k++) {
        if (k >= 1) cout << " ";
        cout << ans[k];
    }
    cout << endl;
}

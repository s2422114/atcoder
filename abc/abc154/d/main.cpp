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
    int N, K;
    cin >> N >> K;
    vector<int> p(N+1);
    for (int i = 1; i <= N; i++) cin >> p[i];
    // 累積和を定義
    vector<double> S(N+1, 0);

    // それぞれの期待値を累積和にする
    for (int i = 1; i <= N; i++) {
        double expected_value = (p[i] + 1) / 2.0;
        S[i] = S[i - 1] + expected_value;
    }

    // 累積和から答えを計算
    double max_value = 0;
    for (int i = K; i <= N; i++) {
        max_value = max((S[i] - S[i-K]), max_value); 
    }

    cout << fixed << setprecision(12) << max_value << endl;
}

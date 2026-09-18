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
    // 入力
    int N, A[200009]; long long cnt[109], Answer = 0;
    cin >> N;
    for (int i = 1; i <= N; i++) cin >> A[i];

    // 個数を数える
    for (int i = 1; i <= 100; i++) cnt[i] = 0;
    for (int i = 1; i <= N; i++) cnt[A[i]] += 1;

    // 答えを求める
    for (int i = 1; i <= 100; i++) {
        Answer += cnt[i] * (cnt[i]-1) * (cnt[i]-2) / 6;
    }
    cout << Answer << endl;
    return 0;
}

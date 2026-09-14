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
    long long N, A;
    char T;
    cin >> N;

    // 初期値
    long long x = 0;
    for (int i = 1; i <= N; i++) {
        // 入力
        cin >> T >> A;

        if (T == '+') {
            x += A;
        }
        if (T == '-') {
            x -= A;
        }
        if (T == '*') {
            x *= A;
        }

        // 0未満になった場合
        if (x < 0) x += 10000;
        x %= 10000;

        // 出力
        cout << x << endl;
    }
}

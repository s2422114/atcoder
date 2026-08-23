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
    int T, X;
    cin >> T >> X;
    vector<int> A(T + 1);
    for (int i = 0; i <= T; i++) {    // 0 から T まで T+1 個読む
        cin >> A[i];
    }

    int last = A[0];                   // 最後に保存した値（int 1つで十分）
    cout << 0 << " " << A[0] << endl;  // 時刻0は無条件で保存・出力

    for (int i = 1; i <= T; i++) {
        if (abs(A[i] - last) >= X) {
            cout << i << " " << A[i] << endl;
            last = A[i];               // 保存したときだけ更新
        }
        // 保存しないときは last をそのまま（何もしない）
    }
}

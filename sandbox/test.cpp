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
    // 入力を受け付ける
    int H, W, Q;
    cin >> H >> W;
    vector<vector<int>> X(H+1, vector<int>(W+1));
    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++) {
            cin >> X[i][j];
        }
    }
    cin >> Q;
    vector<int> A(Q+1), B(Q+1), C(Q+1), D(Q+1);
    for (int i = 1; i <= Q; i++) {
        cin >> A[i] >> B[i] >> C[i] >> D[i];
    }

    vector<vector<int>> Z (H+1, vector<int>(W+1));

    // Zを初期化
    for (int i = 0; i <= H; i++) {
        for (int j = 0; j <= W; j++) {
            Z[i][j] = 0;
        }
    }
    // 横方向の累積和
    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++) {
            Z[i][j] = Z[i][j-1] + X[i][j];
        }
    }

    // 縦方向の累積和
    for (int j = 1; j <= W; j++)
    {
        for (int i = 1; i <= H; i++) {
            Z[i][j] = Z[i-1][j] + Z[i][j];
        }
    }

    // 答えの出力
    for (int i = 1; i <= Q; i++) {
        cout << Z[C[i]][D[i]] + Z[A[i] - 1][B[i] - 1] - Z[A[i] - 1][D[i]] - Z[C[i]][B[i] - 1] << endl;
    }
}

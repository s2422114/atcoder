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
    int N, Q;
    cin >> N;
    vector<int> X(N+1), Y(N+1);
    vector<vector<int>> num(1502, vector<int>(1502));
    for (int i = 1; i <= N; i++) {
        cin >> X[i] >> Y[i];
        num[X[i]][Y[i]]++;
    }
    cin >> Q;
    vector<int> a(Q+1), b(Q+1), c(Q+1), d(Q+1);
    for (int i = 1; i <= Q; i++) {
        cin >> a[i] >> b[i] >> c[i] >> d[i];
    }

    vector<vector<int>> S(1502, vector<int>(1502));
    // 横方向の累積和
    for (int i = 1; i <= 1500; i++) {
        for (int j = 1; j <= 1500; j++) {
            S[i][j] = S[i][j - 1] + num[i][j];
        }
    }

    // 縦方向の累積和
    for (int j = 1; j <= 1500; j++)
    {
        for (int i = 1; i <= 1500; i++)
        {
            S[i][j] = S[i - 1][j] + S[i][j];
        }
    }

    for (int i = 1; i <= Q; i++) {
        cout << S[c[i]][d[i]] + S[a[i] - 1][b[i] - 1] - S[a[i] - 1][d[i]] - S[c[i]][b[i] - 1] << endl;
    }
}

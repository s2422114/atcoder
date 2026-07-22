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
    int H, W, Q;
    cin >> H >> W;
    vector<vector<int>> X(H+1, vector<int>(W+1));
    vector<vector<int>> Z(H+1, vector<int>(W+1));
    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++) {
            cin >> X.at(i).at(j);
        }
    }
    cin >> Q;
    vector<int> A(Q+1), B(Q+1), C(Q+1), D(Q+1);
    for (int i = 1; i <= Q; i++) {
        cin >> A.at(i) >> B.at(i) >> C.at(i) >> D.at(i);
    } 

    // Zの初期化
    for (int i = 0; i <= H; i++) {
        for (int j = 0; j <= W; j++) {
            Z.at(i).at(j) = 0;
        }
    }

    // 横方方向の累積和
    for (int i = 1; i <= H; i++)
    {
        for (int j = 1; j <= W; j++)
        {
            Z.at(i).at(j) = Z.at(i).at(j - 1) + X.at(i).at(j);
        }
    }

    // 縦方向の累積和
    for (int j = 1; j <= W; j++)
    {
        for (int i = 1; i <= H; i++)
        {
            Z.at(i).at(j) = Z.at(i - 1).at(j) + Z.at(i).at(j);
        }
    }

    for (int i = 1; i <= Q; i++) {
        cout << Z.at(C.at(i)).at(D.at(i)) + Z.at(A.at(i) - 1).at(B.at(i) - 1) - Z.at(A.at(i) - 1).at(D.at(i)) - Z.at(C.at(i)).at(B.at(i) - 1) << endl;
    }
}

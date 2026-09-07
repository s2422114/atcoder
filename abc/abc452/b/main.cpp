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
    int H, W;
    cin >> H >> W;

    vector<vector<string>> s(H+1, vector<string>(W+1, "."));

    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++) {
            int sum = 0;
            // 左に隣接
            if (j - 1 >= 1) {
                sum++;
            }
            // 右に隣接
            if (j + 1 <= W) {
                sum++;
            }
            // 上に隣接 
            if (i - 1 >= 1) {
                sum++;
            }
            // 下に隣接
            if (i + 1 <= H) {
                sum++;
            }

            if (sum <= 3) {
                s[i][j] = '#';
            }
        }
    }

    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++) {
            if (j == W) {
                cout << s[i][j] << endl;
            }
            else {
                cout << s[i][j];
            }

        }
    }
}
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
    vector<string> S(H+1);
    for (int i = 1; i <= H; i++) {
        cin >> S[i];
        S[i] = " " + S[i];
    }

    int ans = 0;

    for (int h1 = 1; h1 <= H; h1++) {
        for (int h2 = h1; h2 <= H; h2++) {
            for (int w1 = 1; w1 <= W; w1++) {
                for (int w2 = w1; w2 <= W; w2++) {
                    bool ok = true;
                    for (int i = h1; i <= h2; i++) {
                        for (int j = w1; j <= w2; j++) {
                            if (S[i][j] != S[h1+h2-i][w1+w2-j]) {
                                ok = false;
                            }
                        }
                    }
                    if (ok) ans ++;
                }
            }
        }
    }
    cout << ans << endl;
}

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

    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++) {
            int cnt = 0;
            if (i - 1 >= 1) {
                cnt++;
            }
            if (i + 1 <= H) {
                cnt++;
            }
            if (j - 1 >= 1) {
                cnt++;
            }
            if (j + 1 <= W) {
                cnt++;
            }
            cout << cnt;
            if (j < W) {
                cout << " ";
            }
        }
        cout << endl;
    }
}

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
    vector<vector<int>> A(4, vector<int>(7));
    int cnt4_1 = 0, cnt4_2 = 0, cnt4_3 = 0;
    int cnt5_1 = 0, cnt5_2 = 0, cnt5_3 = 0;
    int cnt6_1 = 0, cnt6_2 = 0, cnt6_3 = 0;
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 6; j++) {
            cin >> A[i][j];
            // それぞれのサイコロについて4,5,6が何回でたか
            if (i == 1 && A[i][j] == 4) {
                cnt4_1++;
            } else if (i == 1 && A[i][j] == 5) {
                cnt5_1++;
            } else if (i == 1 && A[i][j] == 6) {
                cnt6_1++;
            }
            if (i == 2 && A[i][j] == 4) {
                cnt4_2++;
            } else if (i == 2 && A[i][j] == 5) {
                cnt5_2++;
            } else if (i == 2 && A[i][j] == 6) {
                cnt6_2++;
            }
            if (i == 3 && A[i][j] == 4) {
                cnt4_3++;
            } else if (i == 3 && A[i][j] == 5) {
                cnt5_3++;
            } else if (i == 3 && A[i][j] == 6) {
                cnt6_3++;
            }
        }
    }


    // 割り当てのパターンをぜんぶ試す
    long long total = 0;
    total += cnt4_1 * cnt5_2 * cnt6_3;
    total += cnt4_1 * cnt6_2 * cnt5_3;
    total += cnt5_1 * cnt4_2 * cnt6_3;
    total += cnt5_1 * cnt6_2 * cnt4_3;
    total += cnt6_1 * cnt4_2 * cnt5_3;
    total += cnt6_1 * cnt5_2 * cnt4_3;
    
    // 確率を計算
    double ans = (double)total / 216;
    cout << fixed << setprecision(10) << ans << endl;
}

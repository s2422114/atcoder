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
    int T;
    cin >> T;
    for(int i = 1; i <= T; i++) {
        bool check = false;
        long long X1, Y1, R1, X2, Y2, R2;
        cin >> X1 >> Y1 >> R1 >> X2 >> Y2 >> R2;
        // 共有点を持つか判定
        long long d2 = (X2 - X1) * (X2 - X1) + (Y2 - Y1) * (Y2 - Y1);
        if (d2 == (R1 + R2) * (R1 + R2) ) {
            check = true;
        } else if ((R1 - R2) * (R1 - R2) < d2 && d2 < (R1 + R2) * (R1 + R2)) {
            check = true;
        } else if (d2 == (R1 - R2) * (R1 - R2)) {
            check = true;
        }

        if (check)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}

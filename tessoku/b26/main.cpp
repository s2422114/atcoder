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

int N = 1000009;
bool Deleted[1000009];

int main() {
    cin >> N;
    for (int i = 2; i <= N; i++) Deleted[i] = false;

    // エストラネスのふるい
    for (int i = 2; i * i <= N; i++) {
        if (Deleted[i] == true) continue;
        for (int j = i * 2; j <= N; j += i) Deleted[j] = true;
    }

    // 出力
    for (int i = 2; i <= N; i++) {
        // 素数
        if (Deleted[i] == false) {
            cout << i << endl;
        }
    }
    return 0;
}

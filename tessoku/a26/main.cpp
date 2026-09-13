// #define _GLIBCXX_DEBUG
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

bool isPrime(int x) {
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}

int main() {
    int Q, X[10009];
    cin >> Q;

    for (int i = 1; i <= Q; i++) cin >> X[i];

    // 出力
    for (int i = 1; i <= Q; i++) {
        bool Answer = isPrime(X[i]);
        if (Answer == true) cout << "Yes" << endl;
        if (Answer == false) cout << "No" << endl;
    }
    return 0;
}

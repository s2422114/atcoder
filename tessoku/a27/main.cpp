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

int GCD(int A, int B) {
    int ret = 0;
    for (int x = 1; x <= min(A, B); x++) {
        if (A % x == 0 && B % x == 0) ret = x;
    }
    return ret;
}

int main() {
    int X, Y;
    cin >> X >> Y;
    cout << GCD(X, Y) << endl;
}

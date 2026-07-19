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
    int X, Y;
    cin >> X >> Y;

    int ans = 0;
    if (X + Y <= 12) {
        ans = X + Y;
    } else {
        ans = X + Y - 12;
    }

    cout << ans << endl;
}

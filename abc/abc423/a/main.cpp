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
    int X, C;
    cin >> X >> C;

    int cnt = X / (1000 + C);

    int ans = cnt * 1000;

    cout << ans << endl;
}

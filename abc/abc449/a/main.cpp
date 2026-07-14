#define _GLIBCXX_DEBUG
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <bitset>
#include <iomanip>
using namespace std;

int main() {
    int D;
    cin >> D;

    double r = D / 2.0;

    double ans = 3.141592653589793 * r * r;

    cout << fixed << setprecision(15) << ans << endl;
}

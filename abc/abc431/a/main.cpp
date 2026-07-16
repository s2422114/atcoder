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
    int H, B;
    cin >> H >> B;

    int ans = 0;
    if (H >= B) {
        ans = H - B;
    }
    cout << ans << endl;
}

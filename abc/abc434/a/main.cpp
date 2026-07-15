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
    int W, B;
    cin >> W >> B;

    int ans = 0;

    // W * 1000 <  * n * B のとき飛び立つ

    ans = W * 1000 / B + 1;
    cout << ans << endl;
}

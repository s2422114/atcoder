#define _GLIBCXX_DEBUG
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <bitset>
using namespace std;

int main() {
    int x, y, l, r, a, b;
    cin >> x >> y >> l >> r >> a >> b;

    int time_out_LR = 0;
    int time_LR = 0;

    if (b <= l || r <= a) {
        time_out_LR = b - a;
    }
    else if (a <= l && r <= b) {
        time_out_LR = (l - a) + (b - r);
        time_LR = r - l;
    }
    else if (a <= l && b <= r) {
        time_out_LR = l - a;
        time_LR = b - l;
    }
    else if (l <= a && r <= b) {
        time_out_LR = b - r;
        time_LR = r - a;
    }
    else if (l <= a && b <= r) {
        time_LR = b - a;
    }
    else {
        time_out_LR = b - a;
    }
    
    int total_cost = time_out_LR * y + time_LR * x;
    cout << total_cost << endl;
}

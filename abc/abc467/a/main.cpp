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
    int H, W;
    cin >> H >> W;
    // bmi = W / H * H >= 25
    if (W * 10000 >= H * H  * 25) {
        cout << "Yes" << endl;
    }else {
        cout << "No" << endl;
    }
}

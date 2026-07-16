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
    int N;
    cin >> N;

    int ans = 0;
    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0) {
            ans += i * i * i;
        }else {
            ans += (-1) * i * i * i;
        }
    }
    cout << ans << endl;
}

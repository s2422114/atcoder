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

    if (N % 2 == 0) {
        ans = (N + 1) * (N / 2);
    }else {
        int N_new = N - 1;
        ans = (N_new + 1) * (N_new / 2) + N;
    }

    cout << ans << endl;
}

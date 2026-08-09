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
    int N, S;
    cin >> N >> S;
    vector<int> T(N+1);
    bool check = true;
    for (int i = 1; i <= N; i++) {
        cin >> T[i];
        if (T[i] - T[i-1] > S + 0.5) {
            check = false;
            break;
        }
    }

    if (check) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}

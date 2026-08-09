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
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    bool check = false;
    if (A > C ) {
        check = true;
    } else if (A == C && B > D) {
        check = true;
    }

    if (check) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}

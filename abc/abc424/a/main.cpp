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
    int A, B, C;
    cin >> A >> B >> C;

    if (A == B || A == C || B == C) {
        cout << "Yes" << endl;
    }else {
        cout << "No" << endl;
    }
}

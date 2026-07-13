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
    int A, B, C;
    cin >> A >> B >> C;

    if (A != B && B == C) {
        cout << "Yes" << endl;
    }else {
        cout << "No" << endl;
    }
}

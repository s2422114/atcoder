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
    int N, X;
    cin >> N >> X;
    bool check = false;
    for (int i = 0; i < N; i++) {
        int A;
        cin >> A;
        if (A == X) {
            check = true;
        }
    }

    if (check) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}

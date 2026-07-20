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
    int A, B;
    cin >> A >> B;
    bool check = false;

    for (int i = A; i <= B; i++) {
        if (100 % i == 0) {
            check = true;
        }
    }

    if (check) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}

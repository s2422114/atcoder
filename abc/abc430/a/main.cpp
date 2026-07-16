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

    bool illegal = false;
    if (C >= A) {
        if (D < B) {
        illegal = true;
        }
    }

    if (illegal) {
        cout << "Yes" << endl;
    }else {
        cout << "No" << endl;
    }
    
}

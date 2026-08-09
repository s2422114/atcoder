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
    string P;
    int L;
    cin >> P >> L;

    if (P.size() >= L) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}

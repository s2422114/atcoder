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
    int A, D;
    cin >> A >> D;

    if (A <= D) {
        cout << "Yes" << endl;
    }else {
        cout << "No" << endl;
    }
}

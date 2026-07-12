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

int main () {
    int A, B;
    cin >> A >> B;

    if (A * 3 > B * 2) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}

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
    string S;
    cin >> S;

    if (S.at(0) == S.at(S.size() - 1)) {
        cout << "Yes" << endl;
    }else {
        cout << "No" << endl;
    }
}

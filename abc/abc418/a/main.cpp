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
    int N;
    string S;
    cin >> N >> S;

    if (S.size() >= 3 && S.at(S.size() - 1) == 'a' && S.at(S.size() - 2) == 'e' && S.at(S.size() - 3) == 't') {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}

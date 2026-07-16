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

    int L = (S.size() + 1) / 2;
    S.erase(L - 1, 1);
    cout << S << endl;
}

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

    char s_1 = S.at(0) + 32;

    S.at(0) = s_1;

    string ans;
    ans = "Of" + S;

    cout << ans << endl;
}

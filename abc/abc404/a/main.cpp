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
    vector<bool> used(26, false);

for (int i = 0; i < S.size(); i++) {   // Sの長さぶん回して、印をつける
    used[S.at(i) - 'a'] = true;
}

for (int i = 0; i < 26; i++) {          // こっちは26回まわす
    if (!used[i]) {
        cout << (char)('a' + i) << endl;
        break;
    }
}
}

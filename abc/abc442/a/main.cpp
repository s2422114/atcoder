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

    int cnt = 0;
    for (int i = 0; i < S.size(); i++) {
        if (S.at(i) == 'i' || S.at(i) == 'j') {
            cnt++;
        }
    }
    cout << cnt << endl;
}

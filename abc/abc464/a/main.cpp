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
    string s ;
    cin >> s;
    int cnt_e = 0, cnt_w = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'E') {
            cnt_e++;
        }
        if (s[i] == 'W') {
            cnt_w++;
        }
    }

    if (cnt_e > cnt_w) {
        cout << "East" << endl;
    } else {
        cout << "West" << endl;
    }
}

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
    string s; // burger
    int n;
    cin >> s;
    cin >> n;

    s.erase(0,n); // urger

    int era_position = s.size() - n;
    s.erase(era_position, n); // urge

    cout << s << endl;
}

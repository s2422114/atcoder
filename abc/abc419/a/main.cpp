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

    map<string, string> table;
    table["red"] = "SSS";
    table["blue"] = "FFF";
    table["green"] = "MMM";

    if (table.count(S) > 0) {
        cout << table.at(S) << endl; 
    } else {
        cout << "Unknown" << endl;
    }
}

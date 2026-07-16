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
    string X, Y;
    cin >> X >> Y;

    map<string, int> rank;
    rank["Ocelot"] = 0;
    rank["Serval"] = 1;
    rank["Lynx"]   = 2;
    if (rank[X] >= rank[Y]) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}

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
    int X, Y;
    cin >> X >> Y;

    int ans = X * std::pow(2, Y);
    cout << ans << endl; 
}

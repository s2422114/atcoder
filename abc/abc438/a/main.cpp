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
    int D, F;
    cin >> D >> F;

    int remainder = (D - F) % 7; 
    int ans = 7 - remainder;
    cout << ans << endl;
}

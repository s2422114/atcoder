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
    int  N, K;
    cin >> N >> K;
    if (K >= 2*N-2 && K%2 == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}

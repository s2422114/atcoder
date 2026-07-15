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
    int N;
    string S;
    cin >> N >> S;

    while (S.size() < N) {
        S.insert(0, 1, 'o');
    }

    cout << S << endl;
}

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
    int S, A, B, X;
    cin >> S >> A >> B >> X;

    int cnt = X / (A + B);
    int remainder = X % (A + B);

    int run_time = A * cnt + min(remainder, A);

    cout << run_time * S << endl;
}

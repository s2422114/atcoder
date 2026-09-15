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
    long long N;
    cin >> N;
    long long A1 = (N / 3);
    long long A2 = (N / 5);
    long long A3 = (N / 15);
    cout << A1 + A2 - A3 << endl;
    return 0;
}

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
    long long A1 = N / 3; // 70
    long long A2 = N / 5; // 42
    long long A3 = N / 7; // 30
    long long A4 = N / 15;// 14
    long long A5 = N / 21;// 10
    long long A6 = N / 35;// 6
    long long A7 = N / 105;// 2
    cout << A1 + A2 + A3 - A4 - A5 - A6 + A7 << endl;
    return 0;
}

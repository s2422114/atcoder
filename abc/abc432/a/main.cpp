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
    int A, B, C;
    cin >> A >> B >> C;

    int first = max({A, B, C});
    int third = min({A, B, C});
    int second = A + B + C - first - third;
    
    
    cout << first << second << third << endl;
}

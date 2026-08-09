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
    int A, B;
    cin >> A >> B;
    double real = (double)A / B;
    int c = A/ B;
    
    if (real - c < c + 1 - real) {
        cout << c << endl;
    } else {
        cout << c + 1 << endl;
    }
}

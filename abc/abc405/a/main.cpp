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
    int R,  X;
    cin >> R >> X;
    if (X == 1 && 1600 <= R && R <= 2999) {
        cout << "Yes" << endl;
    } else if (X == 2 && 1200 <= R && R <= 2399) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}

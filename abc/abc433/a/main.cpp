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
    int X, Y, Z;
    cin >> X >> Y >> Z;

    bool check = false;
    while (X <= 100 || Y <= 100) {
        if (X  ==Y * Z)
        {
            check = true;
        }
        X++;
        Y++;
    }
    if (check) {
        cout << "Yes" << endl;
    }else {
        cout << "No" << endl;
    }
}

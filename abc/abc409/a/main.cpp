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
    string T, A;
    cin >> N >> T >> A;
    bool check = false;
    for (int i = 0; i < N; i++) {
        if (T.at(i) == 'o' && A.at(i) == 'o')
        {
            check = true;
            break;
        }
    }

    if (check) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}

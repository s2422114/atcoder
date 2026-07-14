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
    int N, M;
    cin >> N >> M;

    if (N % 2 == 0) {
        if (N / 2 >= M) {
            cout << "Yes" << endl;
        }else {
            cout << "No" << endl;
        }
    }else {
        if (N / 2 + 1 >= M) {
            cout << "Yes" << endl;
        }else {
            cout << "No" << endl;
        }
    }
}

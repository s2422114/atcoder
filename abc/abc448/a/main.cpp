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
    int N, X;
    cin >> N >> X;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A.at(i);
        if (A.at(i) < X) {
            X = A.at(i);
            cout << "1" << endl;
        }
        else {
            cout << "0" << endl;
        }
    }
}

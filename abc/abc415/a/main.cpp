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
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A.at(i);
    }
    cin >> X;

    auto it = find(A.begin(), A.end(), X);

    if (it != A.end()) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}

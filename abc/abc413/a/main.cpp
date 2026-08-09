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
    int A;
    int sum_weight = 0;
    for (int i = 0; i < N; i++) {
        cin >> A;
        sum_weight+= A;
    }

    if (sum_weight <= M) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}

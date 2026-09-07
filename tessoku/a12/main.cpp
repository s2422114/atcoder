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
    long long N, K;
    cin >> N >> K;
    vector<long long> A(N+1);
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    long long L = 1, R = 1000000000;

    while (L < R) {
        long long M = (L + R) / 2;
        long long sum = 0;
        for (int i = 1; i <= N; i++) {
            sum += M / A[i];
        }

        if (sum < K) {
            L = M + 1;
        } else {
            R = M;
        }
    }

    cout << L << endl;
}

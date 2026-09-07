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
    vector<int> A(N+1);
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    int L, R = 0;   
    L = 1;
    R = N;

    for (int i = 1; i <= N; i++) {
        int M = (L + R) / 2;
        if (X < A[M]) {
            R = M - 1;
        } else if (X > A[M]) {
            L = M + 1;
        } else {
            cout << M << endl;
            break;
        }
    }
}

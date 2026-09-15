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
    long long N;
    cin >> N;

    const long long MOD = 1000000007;
    vector<long long> A(N+1);
    A[1] = 1, A[2] = 1;

    for (int i = 3; i <= N; i++) {
        A[i] = (A[i-1] + A[i-2]) % MOD;
    }
    
    cout << A[N] << endl;

}

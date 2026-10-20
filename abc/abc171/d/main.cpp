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
#include <stack>
#include <numeric>
using namespace std;

int main() {
    int N, Q;
    cin >> N;
    vector<int> A(N+1);
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }
    cin >> Q;
    vector<int> B(Q+1), C(Q+1);
    for (int i = 1; i <= Q; i++) {
        cin >> B[i] >> C[i];
    }

    // (C[i] - B[i]) * AにおけるBの値の数を求める
    // 初期の総和を求める
    long long sum = accumulate(A.begin(), A.end(), 0LL);

    map<int, int> cnt;
    for (int i = 1; i <= N; i++) cnt[A[i]]++;
    
    for (int i = 1; i <= Q; i++) {
        long long k = cnt[B[i]];
        sum += (long long) (C[i] - B[i]) * k;
        cnt[C[i]] += k;
        cnt[B[i]] = 0;

        cout << sum << endl;
    }
}

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
using namespace std;

int main() {
    int N, T;
    cin >> N >> T;
    vector<long long> A(T+1), B(T+1);
    vector<long long> S(N+1);
    map<long long, int> cnt;
    cnt[0] = N;
    for (int i = 1; i <= T; i++) {
        cin >> A[i] >> B[i];

        cnt[S[A[i]]]--;
        if (cnt[S[A[i]]] == 0) cnt.erase(S[A[i]]);
        S[A[i]] += B[i];
        cnt[S[A[i]]]++;
        cout << cnt.size() << endl;
    }
}

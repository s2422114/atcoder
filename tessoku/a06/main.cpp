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
    int N, Q;
    cin >> N >> Q;
    vector<int> A(N+1);
    for (int i = 1; i <= N; i++) {
        cin >> A.at(i);
    }
    vector<int> L(Q+1), R(Q+1);
    for (int i = 1; i <= Q; i++) {
        cin >> L.at(i) >> R.at(i);
    }
    int sum = 0;
    vector<int> S(N+1);
    for (int i = 1; i <= N; i++) {
        sum = sum + A.at(i);
        S.at(i) = sum;
    }

    int ans = 0;
    for (int i = 1; i <= Q; i++) {
        ans = S.at(R.at(i)) - S.at(L.at(i) - 1);
        cout << ans << endl;
    }
}

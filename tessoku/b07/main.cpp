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
    int T, N;
    cin >> T >> N;
    vector<int> L(N), R(N);
    for (int i = 0; i < N; i++) {
        cin >> L.at(i) >> R.at(i);
    }

    vector<int> B(T+2); // 従業員の時間比
    for (int i = 0; i < N; i++) {
        B.at(L.at(i))++;
        B.at(R.at(i))--;
    }

    vector<int> S(T+2); // 累積和
    S.at(0) = B.at(0);
    for (int i = 1; i < T; i++) {
        S.at(i) = S.at(i - 1) + B.at(i);
    }
    for (int i = 0; i < T; i++) {
        cout << S.at(i) << endl;
    }
}

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
    // 入力
    int N, K;
    cin >> N >> K;
    vector<char> S(N+1);
    for (int i = 1; i <= N; i++) cin >> S[i];
    // ONの数をカウント
    int cnt = 0;
    for (int i = 1; i <= N; i++) {
        if (S[i] == '1') cnt++;
    }

    if (K % 2 == 1 && cnt % 2 == 1) cout << "Yes" << endl;
    else if (K % 2 == 0 && cnt % 2 == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}

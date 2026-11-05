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
    int N, K;
    cin >> N >> K;
    vector<int> c(N+1);
    for (int i = 1; i <= N; i++) cin >> c[i];

    map<int, int> cnt;
    // しゃくとり法
    for (int i = 1; i <= K; i++) cnt[c[i]]++;
    int ans = cnt.size();

    for (int i = K + 1; i <= N; i++) {
        cnt[c[i]]++;
        cnt[c[i-K]]--;
        if (cnt[c[i-K]] == 0) cnt.erase(c[i-K]);
        ans = max(ans, (int)cnt.size());
    }

    cout << ans << endl;
}

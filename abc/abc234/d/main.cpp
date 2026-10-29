//#define _GLIBCXX_DEBUG
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
    vector<int> P(N+1);
    priority_queue<int, vector<int>, greater<int>> Q;
    for (int i = 1; i <= N; i++) {
        cin >> P[i];
        // 初期値を代入
        if (i <= K) Q.push(P[i]);
    }
    // 最初の代入時点での最小値を出力
    cout << Q.top() << endl;

    for (int i = K + 1; i <= N; i++) {
        Q.push(P[i]);
        if (Q.size() > K) Q.pop();
        cout << Q.top() << endl;
    }
}

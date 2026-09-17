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
    int N, D;
    cin >> N >> D;

    vector<vector<int>> jobs(D + 1);   // jobs[d] = d日目から選べる仕事の報酬リスト
    for (int i = 1; i <= N; i++) {
        int x, y;
        cin >> x >> y;
        jobs[x].push_back(y);
    }

    priority_queue<int> Q;
    long long Answer = 0;

    for (int d = 1; d <= D; d++) {
        for (int y : jobs[d]) Q.push(y);     // この日から選べる仕事を追加
        if (!Q.empty()) {
            Answer += Q.top();                // 一番高いものを取る
            Q.pop();
        }
    }
    cout << Answer << endl;
}

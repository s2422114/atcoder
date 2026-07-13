#define _GLIBCXX_DEBUG
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <bitset>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> c(N);
    vector<int> s(N);
    for (int i = 0; i < N; i++) {
        cin >> c.at(i) >> s.at(i);
    }
    
    vector<int> ans(M + 1, -1);

    for (int i = 0; i < N; i++) {
        // 色 c.at(i) の最大値を、s.at(i) と比べて更新する
        if (s.at(i) > ans.at(c.at(i)))
        ans.at(c.at(i)) = s.at(i);
    }
    
    for (int k = 1; k <= M; k++) {
        cout << ans.at(k);
        if (k < M) {
            cout << " ";
        }
    }
    cout << endl;
}

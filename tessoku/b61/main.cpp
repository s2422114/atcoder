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

int N, M;
int A[100009], B[100009];
vector<int> G[100009];

int main() {
    cin >> N >> M;
    for (int i = 1; i <= M; i++) {
        cin >> A[i] >> B[i];
        G[A[i]].push_back(B[i]);
        G[B[i]].push_back(A[i]);
    }

    int max_count = 0, max_id;
    // 最も辺が多いGの要素を特定
    for (int i = 1; i <= N; i++) {
        if ((int)G[i].size() > max_count) {
            max_count = max(max_count, (int)G[i].size());
            max_id = i;
        }
    }   

    // 出力
    cout << max_id << endl;
}

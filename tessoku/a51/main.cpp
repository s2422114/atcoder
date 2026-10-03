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

int Q;
int QueryType[100009]; string x[100009];
stack<string> S;

int main() {
    cin >> Q;
    for (int i = 1; i <= Q; i++) {
        cin >> QueryType[i];
        if (QueryType[i] == 1) cin >> x[i];
    }

    // クエリ
    for (int i = 1; i <= Q; i++) {
        if (QueryType[i] == 1) S.push(x[i]);
        if (QueryType[i] == 2) cout << S.top() << endl;
        if (QueryType[i] == 3) S.pop();
    }
    return 0;
}

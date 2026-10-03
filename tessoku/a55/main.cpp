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
int QueryType[100009]; int x[100009];
set<int> S;

int main() {
    cin >> Q;
    for (int i = 1; i <= Q; i++) {
        cin >> QueryType[i] >> x[i];
    }

    // クエリ
    for (int i = 1; i <= Q; i++) {
        if (QueryType[i] == 1) S.insert(x[i]);
        if (QueryType[i] == 2) S.erase(x[i]);
        if (QueryType[i] == 3) {
            auto itr = S.lower_bound(x[i]);
            if (itr == S.end()) cout << "-1" << endl;
            else cout << (*itr) << endl;
        }
    }
    return 0;
}

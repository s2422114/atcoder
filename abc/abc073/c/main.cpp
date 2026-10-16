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
    int N;
    cin >> N;
    vector<int> A(N+1);
    set<int> S;
    for (int i = 1; i <= N; i++) cin >> A[i];

    for (int i = 1; i <= N; i++) {
        if (S.count(A[i]) == 0) S.insert(A[i]);
        else S.erase(A[i]);
    }

    cout << S.size() << endl;
}

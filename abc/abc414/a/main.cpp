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
    int N, L, R;
    cin >> N >> L >> R;
    vector<int> X (N+1), Y (N+1);
    for (int i = 1; i <= N; i++) {
        cin >> X[i] >> Y[i];
    }

    int cnt = 0;
    for (int i = 1; i <= N; i++) {
        if (X[i] <= L && R <= Y[i]) {
            cnt++;
        }
    }

    cout << cnt << endl;
}

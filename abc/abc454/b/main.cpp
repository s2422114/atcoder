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
    int N, M;
    cin >> N >> M;
    vector<int> F(N+1);
    for (int i = 1; i <= N; i++) {
        cin >> F[i];
    }

    vector<int> cnt(M+1, 0);
    for (int i = 1; i <= N; i++) {
        cnt[F[i]]++;
    }

    bool diff = true;
    for (int i = 1; i <= M; i++) {
        if (cnt[i] >= 2) {
            diff = false;
        }
    }
    if (diff) {
        cout << "Yes" << endl; 
    } else {
        cout << "No" << endl;
    }

    bool check = true;
    for (int i = 1; i <= M; i++) {
        if (cnt[i] == 0) {
            check = false;
            break;
        }
    }

    if (check) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}

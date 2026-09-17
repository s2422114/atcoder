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
    int N, L[300009], R[300009];
    vector<pair<int, int>> tmp;

    cin >> N;
    for (int i = 1; i <= N; i++) {
        cin >> L[i] >> R[i];
        tmp.push_back(make_pair(R[i], L[i]));
    }

    // Rの小さい順にソート
    sort(tmp.begin(), tmp.end());
    for (int i = 1; i <= N; i++) {
        R[i] = tmp[i-1].first;
        L[i] = tmp[i-1].second;
    } 

    // 終了時刻の早いものから貪欲に取っていく
    int CurrentTime = 0, Answer = 0;
    for (int i = 1; i <= N; i++) {
        if (CurrentTime <= L[i]) {
            CurrentTime = R[i];
            Answer += 1;
        }
    }
    cout << Answer << endl;
    return 0;
}

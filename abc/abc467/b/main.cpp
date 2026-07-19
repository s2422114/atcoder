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
    int N;
    cin >> N;

    vector<int> A(N);
    vector<int> B(N);
    vector<string> S(N);

    int Y_cnt = 0;
    int X_cnt = 0;
    for (int i = 0; i < N; i++) {
        cin >> A.at(i) >> B.at(i) >> S.at(i);
        
        Y_cnt = (B.at(i) - A.at(i)) + Y_cnt;
        if (S.at(i) == "take") {
            X_cnt = (B.at(i) - A.at(i)) + X_cnt;
        }
    }

    int ans = Y_cnt - X_cnt;
    cout << ans << endl;
}

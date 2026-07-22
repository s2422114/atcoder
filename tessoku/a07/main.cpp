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
    int D, N;
    cin >> D >> N;
    vector<int> L(N+1), R(N+1);
    for (int i = 1; i <= N; i++) {
        cin >> L.at(i) >> R.at(i);
    }

    vector<int> B(D+2);
    for (int i = 1; i <= N; i++) {
        B.at(L.at(i))++;
        B.at(R.at(i) + 1)--;
    }

    vector<int> S(D+1);
    for (int i = 1; i <= D; i++) {
        S.at(i) = S.at(i - 1) + B.at(i);    
    }
    for (int i = 1; i <= D; i++) {
        cout << S.at(i) << endl;
    }
}

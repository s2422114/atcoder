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
    int N, Q;
    cin >> N;
    vector<int> A(N+1);
    for (int i = 1; i <= N; i++) {
        cin >> A.at(i);
    }
    cin >> Q;
    vector<int> L(Q+1), R(Q+1);
    for (int i = 1; i <= Q; i++) {
        cin >> L.at(i) >> R.at(i);
    }

    vector<int> win(N+1), lose(N+1);
    int cnt_win = 0;
    int cnt_lose = 0;
    for (int i = 1; i <= N; i++) {
        win.at(i) = win.at(i-1);
        lose.at(i) = lose.at(i-1);
        if (A.at(i) == 1) {
            win.at(i)++;
        } else {
            lose.at(i)++;
        }
    }

    for (int i = 1; i <= Q; i++) {
        if (win.at(R.at(i)) - win.at(L.at(i) - 1) > lose.at(R.at(i)) - lose.at(L.at(i) - 1)) {
            cout << "win" << endl;
        }
        else if (win.at(R.at(i)) - win.at(L.at(i) - 1) == lose.at(R.at(i)) - lose.at(L.at(i) - 1)) {
            cout << "draw" << endl;
        } else {
            cout << "lose" << endl;
        }
    }
}

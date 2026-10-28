#define _GLIBCXX_DEBUG
#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    long long X;
    string S;
    cin >> N >> X >> S;

    // 操作列を簡約する
    string ops;
    for (char c : S) {
        if (c == 'U' && !ops.empty() && ops.back() != 'U') {
            ops.pop_back();        // 直前の L / R を打ち消す
        } else {
            ops.push_back(c);
        }
    }

    // 残った操作を順に適用する
    for (char c : ops) {
        if (c == 'U') X /= 2;
        else if (c == 'L') X = X * 2;
        else X = X * 2 + 1;
    }

    cout << X << endl;
}
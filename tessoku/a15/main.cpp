// #define _GLIBCXX_DEBUG
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
    vector<int> A(N+1);
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    vector<int> B(N+1);

    //配列Aのコピーを作成
    vector<int> T;
    T.push_back(0);
    for (int i = 1; i <= N; i++) {
        T.push_back(A[i]);
    }
    //配列Aをソート
    sort(T.begin() + 1, T.end());

    //配列Tの重複削除
    T.erase(unique(T.begin() + 1, T.end()), T.end());

    for (int i = 1; i <= N; i++) {
        B[i] = lower_bound(T.begin() + 1, T.end(), A[i]) - (T.begin() + 1) + 1;
    }

    for (int i = 1; i <= N; i++) {
    if (i >= 2) {
        cout << " ";
    }
    cout << B[i];
    }
}

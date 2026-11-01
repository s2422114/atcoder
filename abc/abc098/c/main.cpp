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
    string S;
    cin >> S;
    int sum_min = 1000000000;

    // Sに先頭文字を追加
    S.insert(0, "a");

    vector<int> cntW(N+1, 0);
    vector<int> cntE(N+1, 0);

    // リーダーと反対を向いている人の数を計算する
    for (int i = 1; i <= N; i++) {
        cntW[i] = cntW[i-1] + (S[i] == 'W' ? 1 : 0);
        cntE[i] = cntE[i-1] + (S[i] == 'E' ? 1 : 0);
    }

    for (int i = 1; i <= N; i++) {
        //  集計
        int sum = cntW[i-1] + (cntE[N] - cntE[i]);
        sum_min = min(sum, sum_min);
    }

    // 出力
    cout << sum_min << endl;
}

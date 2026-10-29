#define _GLIBCXX_DEBUG
#include <iostream>
#include <queue>
using namespace std;

int main() {
    int Q;
    cin >> Q;
    queue<pair<long long, long long>> T;   // {値, 個数}

    for (int i = 1; i <= Q; i++) {
        int a;
        cin >> a;

        if (a == 1) {
            long long x, c;
            cin >> x >> c;
            T.push({x, c});                // c 個まとめて1要素
        }
        else {
            long long c;
            cin >> c;
            long long sum = 0;

            while (c > 0) {
                long long x = T.front().first;      // 先頭のかたまりの値
                long long num = T.front().second;   // その個数

                if (num <= c) {
                    // かたまりを全部使い切る
                    sum += x * num;
                    c -= num;
                    T.pop();
                } else {
                    // かたまりの一部だけ使う
                    sum += x * c;
                    T.front().second -= c;          // 残りを減らす（pop しない）
                    c = 0;
                }
            }

            cout << sum << endl;
        }
    }
}
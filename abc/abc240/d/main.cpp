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
    stack<pair<int, int>> a;

    // 最新の値と次に入れる値が一致したらstackから消す
    // 常に最新の値を覚えておく
    int c = 0;
    for (int i = 1; i <= N; i++) {
        int x;
        cin >> x;
        if (!a.empty() && a.top().first == x) {
            c = a.top().second + 1;
        } else {
            c = 1;
        }
        a.push({x, c}); 
        if (a.top().first == a.top().second) {
            int j = a.top().first;
            while (j > 0) {
                a.pop();
                j--;
            }
        }
        cout << a.size() << endl;
    }
}

#define _GLIBCXX_DEBUG
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <bitset>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    int cnt = 0;
    while (M > 0) {
        M = N % M;
        cnt++;
    }

    cout << cnt << endl;
}
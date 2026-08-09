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
    int N, A, B;
    cin >> N;
    int cnt = 0;
    for (int i = 1; i <= N; i++) {
        cin >> A >> B;
        if (A < B) {
            cnt++;
        }
    }

    cout << cnt << endl;
}

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
    int N = 0;
    cin >> N;
    vector<int> a(N);
    for (int i = 0; i < N; i++) {
        cin >> a.at(i);
    }
    int x;
    cin >> x;

    cout << a[x - 1] << endl;
}

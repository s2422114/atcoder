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
    int N, add;
    cin >> N;
    vector<int> s(10);

    for (int i = 9; N > 0; i--) {
        add = N % 2;
        s.at(i) = add;
        N = N / 2;
    }

    for (int i = 0; i < s.size(); i++) {
        cout << s.at(i);
    }

    cout << endl;

}

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
    int N;
    char X;
    cin >> N >> X;

    int idx = X - 'A';

    vector<vector<char>> S(N, vector<char>(5));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> S.at(i).at(j);
        }
    }

    bool vacant = false;
    for (int i = 0; i < S.size(); i++) {
        for (int j = 0; j < S.at(0).size(); j++) {
            if (S.at(i).at(idx) == 'o')
            {
                vacant = true;
            }
        }
    }

    if (vacant) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
}

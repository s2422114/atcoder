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
    int N, X;
    cin >> N;
    vector<string> S(N + 1);
    string Y;
    bool check = false;
    for (int i = 1; i <= N; i++) {
        cin >> S.at(i);
    }
    cin >> X >> Y;

    if (S.at(X) == Y) {
        check = true;
    }

    if (check) {
        cout << "Yes" << endl;
    }else {
        cout << "No" << endl;
    }
    
}

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
    int N;
    cin >> N;

    vector<int> a(N+1);
    for (int i = 1; i <= N; i++) {
        cin >> a.at(i);
    }

    bool lie = false;
    vector<int> b(N+1);
    for (int i = 1; i <= N; i++) {
        cin >> b.at(i);
        if (a.at(b.at(i)) != i) {
            lie = true;
        }
    }

    if (lie) {
        cout << "No" << endl;
    }else {
        cout << "Yes" << endl;
    }

    
}

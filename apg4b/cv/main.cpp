#define _GLIBCXX_DEBUG
#include <iostream>
#include <queue>
#include <vector>
#include <map>
#include <bitset>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector <int> x(N);
    for (int i = 0; i < N; i++) {
        cin >> x.at(i);
    }

    bool all_negative = true;

    for (int i = 0; i < N; i++) {
        if (x.at(i) >= 0) {
            all_negative = false;
        }
    }

    if (all_negative) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

}
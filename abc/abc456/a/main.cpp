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
    int X;
    cin >> X;


    bool ans = false;
    for (int i = 1; i <= 6; i++) {
        for (int j = 1; j <= 6; j++) {
            for (int k = 1; k <= 6; k++) {
                if (i + j + k == X) {
                    ans = true;
                }
            }
        }
    }

    if (ans) {
        cout << "Yes" << endl;
    }else {
        cout << "No" << endl;
    }
}

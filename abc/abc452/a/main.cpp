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
    int M, D;
    cin >> M >> D;

    vector<int> s(5);
    vector<int> t(5);
    s = {1, 3, 5, 7, 9};
    t = {7, 3, 5, 7, 9};

    bool found = false;
    for (int i = 0; i < 5; i++) {
        if (M == s.at(i) && D == t.at(i))
        {
            found = true;
        }
    }
    
    if (found) {
        cout << "Yes" << endl;
    }else {
        cout << "No" << endl;
    }
}

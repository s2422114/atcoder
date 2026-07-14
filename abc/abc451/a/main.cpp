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
    string S;
    cin >> S;

    if (S.size() % 5 == 0) {
        cout << "Yes" << endl;
    }else {
        cout << "No" << endl;
    }
}

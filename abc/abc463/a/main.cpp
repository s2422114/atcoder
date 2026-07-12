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
    int x, y;
    cin >> x >> y;

    if(x * 9 == y * 16) {
        cout << "Yes" << endl;
    }else {
        cout << "No" << endl;
    }
    
}

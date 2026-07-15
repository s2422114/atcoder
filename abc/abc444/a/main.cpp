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
    string N;
    cin >> N;

    if (N.at(0) == N.at(1) && N.at(1) == N.at(2) && N.at(2) == N.at(0)) {
        cout << "Yes" << endl;
    }else {
        cout << "No" << endl; 
    }
}

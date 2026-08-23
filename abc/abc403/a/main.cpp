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
    int A;
    int sum = 0;

    for (int i = 0; i < N; i++) {
        cin >> A;
        if (i % 2 == 0) {
            sum+= A;
        }
    }
    cout << sum << endl;
}

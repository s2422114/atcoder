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
    int N, M;
    cin >> N >> M;

    if (N > M) {
        for (int i = 1; i <= M; i++)
        {
            cout << "OK" << endl;
        }

        for (int i = M + 1; i <= N; i++)
        {
            cout << "Too Many Requests" << endl;
        }
    }
    else {
        for (int i = 0; i < N; i++) {
            cout << "OK" << endl;
        }
    }
    
}

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
    int N, X, Y;
    cin >> N;

    vector<int> L(N+1);
    vector<vector<int>> A(N+1);

    for (int i = 1; i <= N; i++) {
        cin >> L[i];
        A[i].resize(L[i]+1);
        for (int j = 1; j <= L[i]; j++) {
            cin >> A[i][j];
        }
    }

    cin >> X >> Y;

    cout << A[X][Y] << endl;
    

}

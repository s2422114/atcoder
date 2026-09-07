// #define _GLIBCXX_DEBUG
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
    int N, Q;
    cin >> N;
    vector<int> A(N+1);
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    sort(A.begin() + 1, A.end());

    cin >> Q;
    for (int i = 1; i <= Q; i++) {
        int X;
        cin >> X;
        int num = lower_bound(A.begin() + 1, A.end(), X) - (A.begin() + 1);
        cout << num << endl;
    }


    
}

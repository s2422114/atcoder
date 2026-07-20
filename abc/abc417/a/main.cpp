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
    int N, A, B;
    string S;
    cin >> N >> A >> B >> S;

    S = S.erase(0, A);
    S = S.erase(S.size() - B, B);

    cout << S << endl;
}

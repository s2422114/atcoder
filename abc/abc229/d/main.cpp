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
#include <stack>
using namespace std;

int main() {
    string S;;
    int K;
    cin >> S >> K;
    S.insert(0, "a");

    // 尺取り法（可変長）
    int N = S.size() - 1;
    int l = 1; // 左端
    int ans = 0;
    int dots = 0;
    
    for (int r = 1; r <= N; r++) {
        if (S[r] == '.') dots++;
        while (dots > K) {
            if (S[l] == '.') dots--;
            l++;
        }
        ans = max(ans, r - l + 1);
    }
    cout << ans << endl;
}

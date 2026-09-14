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

// 最大公約数を求める
int GCD(int A, int B) {
    while (A >= 1 && B >= 1) {
        if (A >= B) {
            A = (A % B);
        } 
        else {
            B = (B % A);
        }
    }
    if (A != 0) return A;
    return B;
}

int main() {
    long long A, B;
    cin >> A >> B;
    // 最小公倍数(LCM)求める
    long long LCM = (A * B) / GCD(A, B);
    
    cout << LCM << endl;
    return 0;
}

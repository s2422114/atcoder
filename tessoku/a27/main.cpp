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
    int A, B;
    cin >> A >> B;
    cout << GCD(A, B) << endl;
    return 0;
}

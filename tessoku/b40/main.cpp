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
    int N, A[200009]; long long cnt[109], Answer = 0;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }

    // cnt[p]をA[i]を100で割った時の余りがpとなるようなiの個数としておく
    for (int i = 0; i <= 99; i++) cnt[i] = 0;
    for (int i = 1; i <= N; i++) {
        cnt[A[i] % 100]++;
    }

    // 100になる組み合わせを探す
    for (int i = 0; i <= 50; i++) {
        // (0,0)の時
        if (i == 0) Answer += cnt[0] * (cnt[0] - 1) / 2;
        // (50,50)の時
        else if (i == 50) Answer += cnt[50] * (cnt[50] - 1) / 2;
        // (i,100-i)の時
        else {
            Answer += cnt[i] * cnt[100-i];
        }
    }

    cout << Answer << endl;
    return 0;
    
}

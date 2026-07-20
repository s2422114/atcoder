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
    int N, K;
    cin >> N >> K;
    int cnt = 0;

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            int z = K - i - j;
            if (z >= 1 && z <= N) {
                cnt ++;
            }
        }
    }
    

    cout << cnt << endl;
}

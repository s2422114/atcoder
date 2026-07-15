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

int main()
{
    int N;
    cin >> N;

    int power_N = 1;
    for (int i = 0; i < N; i++)
    {
        power_N *= 2;
    }

    int ans = power_N - 2 * N;
    cout << ans << endl;
}
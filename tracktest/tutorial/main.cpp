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
  // 入力
  int m, n;
  cin >> m;
  vector<char> a(m+1);
  for (int i = 1; i <= m; i++) cin >> a[i];
  cin >> n;
  vector<char> b(n+1);
  for (int i = 1; i <= n; i++) cin >> b[i];

  // ソート
  sort(a.begin(), a.end());

  for (int i = 1; i <= m; i++) {
    int sum = 0;
    for (int j = 1; j <= n; j++) {
      if (a[i] == b[j]) {
        sum++;
      }
    }
    cout << a[i] << ":" << sum << endl;
  }
  }

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int x, y, l, r, a, b;
  cin >> x >> y >> l >> r >> a >> b;

  int total = b - a;

  int high = min(b, r) - max(a, l);
  if (high < 0) { // 重ならない
    high = 0;
  }
  int low = total - high;

  cout << high * x + low * y << endl;
}
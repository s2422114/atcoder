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

#include <iostream>
#include <string>
using namespace std;

int main() {
  string X;
  cin >> X;

  int sum = 0;
  for (int i = 0; i < X.size(); i++) {
    if (X[i] == 'x') {
      sum++;
    }
  }
  cout << sum << endl;
}

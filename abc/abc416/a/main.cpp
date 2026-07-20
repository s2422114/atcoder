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
   int n, l, r;
   string s;
   cin >> n >> l >> r >> s;
   bool check = true;
   
   for (int i = l; i <= r; i++) {
    if (s.at(i-1)  != 'o') {
        check = false;
    }
   }

   if (check) {
    cout << "Yes" << endl;
   } else {
    cout << "No" << endl;
   }
}

#define _GLIBCXX_DEBUG
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <bitset>
using namespace std;

int main() {
    int x;
    cin >> x;
    string s = "HelloWorld";
    s.erase(x-1,1);
    
    cout << s << endl;
}

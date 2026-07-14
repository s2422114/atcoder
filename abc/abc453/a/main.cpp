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
    int N;
    string S;
    cin >> N >> S;

    int i = 0;
    while (i < N && S.at(i) == 'o') {
        i++;
    }
    
    cout << S.substr(i) << endl;

}

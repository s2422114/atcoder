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
#include <stack>
using namespace std;

int Q;
int QueryType[100009]; string x[100009]; int score[100009];
map<string, int> Map;

int main() {
    cin >> Q;
    for (int i = 1; i <= Q; i++) {
        cin >> QueryType[i];
        if (QueryType[i] == 1) cin >> x[i] >> score[i];
        else cin >> x[i];
    }
    
    // クエリ
    for (int i = 1; i <= Q; i++) {
        if (QueryType[i] == 1) Map[x[i]] = score[i];
        else cout << Map[x[i]] << endl;
    }
    return 0;
}

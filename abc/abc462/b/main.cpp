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
    int N;
    cin >> N;
    
    vector<vector<int>> s(N + 1);
    for (int i = 1; i <= N; i++) {
        int K;
        cin >> K;

        for (int j = 0; j < K; j++) {
            int a;
            cin >> a;
            s.at(a).push_back(i);
        }
    }

    for (int i = 1; i <= N; i++) {
        cout << s.at(i).size();
        for (int j = 0; j < s.at(i).size(); j++) {
            cout << " " << s.at(i).at(j);
        }
        cout << endl;
    }
}

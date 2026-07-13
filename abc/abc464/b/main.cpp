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
    int H, W;
    cin >> H >> W;

    vector<vector<char>> data(H, vector<char>(W));

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            cin >> data.at(i).at(j);
        }
    }
    
    int min_up = 50;
    int max_down = 0;
    int min_left = 50;
    int max_right = 0;
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (data.at(i).at(j) == '#') {
                min_up = min(min_up, i);
                max_down = max(max_down, i);
                min_left = min(min_left, j);
                max_right = max(max_right, j);
            }
        }
    }

    for (int i = min_up; i <= max_down; i++) {
        for (int j = min_left; j <= max_right; j++) {
            cout << data.at(i).at(j);
        }
        cout << endl;
    }

}

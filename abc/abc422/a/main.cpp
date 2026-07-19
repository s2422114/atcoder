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
    string S;
    cin >> S;

    int i = S[0] - '0'; // 文字から数字に変換
    int j = S[2] - '0';


    if (j < 8) {
        cout << i << "-" << (j + 1) << endl;
    } else if (i < 8 && j == 8) {
        cout << (i + 1) << "-" << "1" << endl;
    }
    
}

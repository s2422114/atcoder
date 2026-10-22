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

int main() {
    string S;
    cin >> S;

    // stackに文字列を入れる
    string st;

    for (int i = 0; i < (int)S.size(); i++) {
        st.push_back(S[i]);

        if (st.size() >= 3 && st[st.size() - 1] == 'C' && st[st.size() - 2] == 'B' && st[st.size() - 3] == 'A') { 
            st.pop_back();
            st.pop_back();
            st.pop_back();
        }
    }

    cout << st << endl;
}

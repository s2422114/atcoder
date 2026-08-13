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
    for (int i = 0; i < N; i++) {
        string S;
        cin >> S;
        if (S[0] == 'a' || S[0] == 'b' || S[0] == 'c') {
            cout << '2';
        }
        else if (S[0] == 'd' || S[0] == 'e' || S[0] == 'f') {
            cout << '3';
        } 
        else if (S[0] == 'g' || S[0] == 'h' || S[0] == 'i') {
            cout << '4';
        }
        else if (S[0] == 'j' || S[0] == 'k' || S[0] == 'l') {
            cout << '5';
        }
        else if (S[0] == 'm' || S[0] == 'n' || S[0] == 'o')
        {
            cout << '6';
        }
        else if (S[0] == 'p' || S[0] == 'q' || S[0] == 'r' || S[0] == 's')
        {
            cout << '7';
        }
        else if (S[0] == 't' || S[0] == 'u' || S[0] == 'v')
        {
            cout << '8';
        }
        else if (S[0] == 'w' || S[0] == 'x' || S[0] == 'y' || S[0] == 'z')
        {
            cout << '9';
        }
    }
}

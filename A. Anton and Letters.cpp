#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    set<char> distinctLetters;

    for (char c : s) {
        if (c >= 'a' && c <= 'z') {
            distinctLetters.insert(c);
        }
    }

    cout << distinctLetters.size() << endl;
    return 0;
}

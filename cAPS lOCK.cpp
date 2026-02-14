#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word;
    cin >> word;

    bool allUpper = true;
    bool allExceptFirstUpper = true;

    for (char c : word) {
        if (!isupper(c)) {
            allUpper = false;
            break;
        }
    }

    for (size_t i = 1; i < word.size(); i++) {
        if (!isupper(word[i])) {
            allExceptFirstUpper = false;
            break;
        }
    }

    if (allUpper || (allExceptFirstUpper && islower(word[0]))) {
        for (char &c : word) {
            if (isupper(c)) c = tolower(c);
            else c = toupper(c);
        }
    }

    cout << word << endl;
    return 0;
}

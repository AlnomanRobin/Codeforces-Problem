#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int timeLeft = 240 - k;
    int solved = 0;

    for (int i = 1; i <= n; i++) {
        if (timeLeft >= 5 * i) {
            timeLeft -= 5 * i;
            solved++;
        } else {
            break;
        }
    }

    cout << solved << endl;
    return 0;
}


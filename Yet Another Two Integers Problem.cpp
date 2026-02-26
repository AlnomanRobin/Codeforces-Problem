#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
        {
            long long a, b;
            cin >> a >> b;
            long long diff = llabs(a - b);
            long long moves = (diff + 9) / 10;
            cout << moves << endl;
    }

    return 0;
}

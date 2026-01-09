#include <iostream>
using namespace std;

int main()
{
    string a, b;

    cin >> a;
    cin >> b;

    string result = "";

    for(int i = 0; i < a.length(); i++)
    {
        if(a[i] != b[i])
        {
            result = result + '1';
        }
        else
        {
            result = result + '0';
        }
    }

    cout << result << endl;

    return 0;
}

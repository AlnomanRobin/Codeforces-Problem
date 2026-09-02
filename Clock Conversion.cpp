#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    while (t--){
        string s;
        cin >> s;

        int hour = stoi(s.substr(0,2));
        string minutes = s.substr(3,2);
        string period;

        if (hour == 0){
            hour = 12;
            period = "AM";
        }
        else if (hour == 12){
            period = "PM";
        }
        else if (hour > 12){
            hour -= 12;
            period = "PM";
        }
        else{
            period = "AM";
        }
        cout << setw(2) << setfill('0') << hour
             << ":" << minutes << " " << period << '\n';
    }
    return 0;
}

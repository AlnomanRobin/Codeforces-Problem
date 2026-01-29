#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n,k,l,c,d,p,nl,np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int totalDrink = k*l;
    int drinkToasts = totalDrink/nl;
    int limeToasts = c*d;
    int saltToasts = p/np;

    int totalToasts=min({drinkToasts, limeToasts, saltToasts});

    cout<<totalToasts/n<<endl;
    return 0;
}

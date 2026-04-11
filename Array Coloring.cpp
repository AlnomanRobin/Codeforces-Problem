#include<iostream>
using namespace std;
int main()
{
    int t,i,x;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int odd=0,even=0;
        for(i=0;i<n;i++)
        {
            cin>>x;
            if(x%2==0)
                even++;
            else
                odd++;
        }
        if(odd>=2 || (odd>=1 && even>=1))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}

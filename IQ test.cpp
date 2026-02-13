#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[105];
    int evenCount = 0, oddCount = 0;

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    bool majorityEven = (evenCount > oddCount);

    for(int i = 0; i < n; i++) {
        if(majorityEven && arr[i] % 2 != 0) {
            cout << i + 1 << endl;
            break;
        }
        if(!majorityEven && arr[i] % 2 == 0) {
            cout << i + 1 << endl;
            break;
        }
    }

    return 0;
}

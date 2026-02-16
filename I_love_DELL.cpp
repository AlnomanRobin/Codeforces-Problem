#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[1000];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int maxScore = arr[0];
    int minScore = arr[0];
    int amazing = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] > maxScore) {
            amazing++;
            maxScore = arr[i];
        }
        else if (arr[i] < minScore) {
            amazing++;
            minScore = arr[i];
        }
    }

    cout << amazing << endl;

    return 0;
}

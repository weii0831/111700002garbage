#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[20];
    for (int i = 0; i < 20; i++) cin >> arr[i];
    int min = abs(arr[1] - arr [0]);
    for (int i = 0; i < 19; i++) if ( abs(arr[i + 1] - arr[i]) < min) min = abs(arr[i + 1] - arr[i]);
    cout << min << endl;
    return 0;
}
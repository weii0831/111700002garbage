#include <bits/stdc++.h>
using namespace std;

void find_max(int array[3], int* max) {
    *max = array[0]; 
    for (int i = 1; i < 3; i++) {
        if (array[i] > *max) *max = array[i];
    }
}

int main() {
    int array[3];
    int max_value;
    for (int i = 0; i < 3; i++) cin >> array[i];
    find_max(array, &max_value);
    cout << "Max: " << max_value << endl;
    return 0;
}

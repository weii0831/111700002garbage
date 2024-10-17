#include <bits/stdc++.h>
using namespace std;

int* func(string arr[3]) {
    int* index = new int;
    for (int i = 0; i < 3; i++) {
        if (arr[i] == "BILL") *index = i + 1;
        else *index = 0;
    }
    return index;
    delete index;
}

int main() {
    string arr[3];
    for (int i = 0; i < 3; ++i) cin >> arr[i];
    int* result = func(arr);
    if (*result == 0) cout << "No" << endl;
    else cout << *result << endl;
    delete[] result;
    return 0;
}

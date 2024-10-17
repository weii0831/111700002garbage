#include <bits/stdc++.h>
using namespace std;
void print(int n) {
    switch (n) {
        case 6:
            cout << ".ooo" << endl;
            cout << ".oo." << endl;
            cout << "oo.." << endl;
            break;
        case 7:
            cout << ".ooo" << endl;
            cout << ".ooo" << endl;
            cout << "oo.." << endl;
            break;
        case 8:
            cout << ".oo." << endl;
            cout << ".ooo" << endl;
            cout << "oo.." << endl;
            break;
        case 9:
            cout << ".o.o" << endl;
            cout << ".oo." << endl;
            cout << "oo.." << endl;
            break;
        case 0:
            cout << ".o.o" << endl;
            cout << ".ooo" << endl;
            cout << "oo.." << endl;
            break;

        default:
            break;
    }
}

int main() {
    int arr[5];
    for(int i = 0; i < 5; i++) cin >> arr[i];
    for(int i = 0; i < 5; i++) print(arr[i]), cout << endl;
    return 0;
}
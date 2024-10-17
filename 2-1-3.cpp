#include <iostream>
using namespace std;

void sort(int &a, int &b) {
    if (a < b) {
        int temp = a;
        a = b;
        b = temp;
    }
}

int main() {
    int a, b;
    while (cin >> a >> b) {
        sort(a, b);
        cout << a << " " << b << endl;
    }

    return 0;
}
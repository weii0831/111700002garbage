#include <iostream>
using namespace std;

void sum(long long int &a, long long int &b) {
    a = a + b;
}
int main() {
    long long int a, b;
    while (cin >> a >> b) {
        sum(a, b);
        cout << a << endl;
    }

    return 0;
}

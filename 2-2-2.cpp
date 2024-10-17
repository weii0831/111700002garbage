#include <bits/stdc++.h>
using namespace std;

int power(int x, int n) {
    int result = 1;
    for (int i = 0; i < n; i++) result *= x;
    return result;
}

double power(double x, int n) {
    double result = 1.0;
    for (int i = 0; i < n; i++) result *= x;
    return result;
}

int main() {
    double a;
    int b, c;
    cin >> a >> b >> c;
    cout << power(a, c) << endl; 
    cout << power(b, c) << endl; 
    return 0;
}

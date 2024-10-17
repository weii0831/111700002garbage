#include <bits/stdc++.h>
using namespace std;

int day[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int fun(int m, int d) {
    int ans = 0;
    for(int i = 0; i < m-1; i++) ans += day[i];
    return ans + d;
}

int main() {
    int m, d;
    cin >> m >> d;
    cout << fun(m, d) << endl;
}
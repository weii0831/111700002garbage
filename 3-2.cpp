#include <bits/stdc++.h>
using namespace std;

string func1(string a, string b){
    if(a == b) return a;
    else return a + b;
}

int main() {
    string a, b;
    cin >> a >> b;
    string ans = func1(a, b);
    cout << a.length() << " " << b.length() << endl;
    cout << ans << endl;
    return 0;
}

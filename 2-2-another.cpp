#include <bits/stdc++.h>
using namespace std;

char bts(char b) {
    return b + 32;
}

char stb(char s) {
    return s - 32;
}

int main() {
    char s;
    while(cin >> s){
        if (s >= 65 && s <= 90) cout << bts(s) << endl;
        else cout << stb(s) << endl;
    }   
    return 0;   
}

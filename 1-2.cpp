#include <bits/stdc++.h>
using namespace std;

string func(int num) {
    string ans;
    while(num != 0) {
        if(num % 2 == 0) ans = "0" + ans;
        else ans = "1" + ans; 
        num /= 2;
    }
    return ans;
}
int main() {
    int num;
    //string ans;
    cin >> num;
    /*while(num != 0) {
        if(num % 2 == 0) ans = "0" + ans;
        else ans = "1" + ans; 
        num /= 2;
    }*/

    cout << func(num) << endl;
}

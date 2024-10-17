#include <bits/stdc++.h>
using namespace std;

//其實我不太懂這題要幹嘛，沒跟我說數字範圍，還要自定義函釋，但cmath裡面明明就有東西能用
//沒跟我說範圍難不成我要自己一個個寫質數對數值，然後質因數分解嗎
void print_log(int num) {
    cout << fixed << setprecision(4) << log10(num);
    //我看答案只有4位小數，所以我也跟進
}
int main() {
    int num;
    cin >> num;
    print_log(num);
    return 0;
}
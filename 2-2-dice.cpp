#include<bits/stdc++.h>
using namespace std;

void dice(int num){
    switch (num){
    case 1:
        cout << "⚀" << endl;
        cout << "----------" << endl;
        cout << "|        |" << endl;
        cout << "|    ●   |" << endl;
        cout << "|        |" << endl;
        cout << "----------" << endl;
        break;
    case 2:
        cout << "⚁" << endl;
        cout << "----------" << endl;
        cout << "| ●      |" << endl;
        cout << "|        |" << endl;
        cout << "|      ● |" << endl;
        cout << "----------" << endl;
        break;
    case 3:
        cout << "⚂" << endl;
        cout << "----------" << endl;
        cout << "| ●      |" << endl;
        cout << "|    ●   |" << endl;
        cout << "|      ● |" << endl;
        cout << "----------" << endl;
        break;
    case 4:
        cout << "⚃" << endl;
        cout << "----------" << endl;
        cout << "| ●    ● |" << endl;
        cout << "|        |" << endl;
        cout << "| ●    ● |" << endl;
        cout << "----------" << endl;
        break;
    case 5:
        cout << "⚄" << endl;
        cout << "----------" << endl;
        cout << "| ●    ● |" << endl;
        cout << "|    ●   |" << endl;
        cout << "| ●    ● |" << endl;
        cout << "----------" << endl;
        break;
    default:
        cout << "⚅" << endl;
        cout << "----------" << endl;
        cout << "| ●    ● |" << endl;
        cout << "| ●    ● |" << endl;
        cout << "| ●    ● |" << endl;
        cout << "----------" << endl;
        break;            
    }
}
int main(){

    
    srand(time(NULL));
    int num = rand() % 6 + 1;
    dice(num);
    return 0;
}
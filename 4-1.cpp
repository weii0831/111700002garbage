#include <bits/stdc++.h>
using namespace std;

class Cbox {
    private:
        int width;
        int height;

    public:
        void set(int w, int h) {
            width = w;
            height = h;
        }
        int area() {
            return width * height;
        }
};

int main() {
    Cbox box;
    int w, h;
    cin >> w >> h;
    box.set(w, h);
    cout << box.area() << endl;
    return 0;
}

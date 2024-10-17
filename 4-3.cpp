#include <bits/stdc++.h>
using namespace std;

class Triangle {
    private:
        double edge1, edge2, edge3;  // 三個邊長，設為 private

    public:

        void set(double e1, double e2, double e3) {
            edge1 = e1;
            edge2 = e2;
            edge3 = e3;
        }

        bool istri() {
            return (edge1 + edge2 > edge3) && (edge1 + edge3 > edge2) && (edge2 + edge3 > edge1);
        }

        double area() {
            if (!istri()) {
                return 0;
            }
            // 海龍
            double s = (edge1 + edge2 + edge3) / 2;
            return sqrt(s * (s - edge1) * (s - edge2) * (s - edge3));
        }

        double perimeter() {
            if (!istri()) {
                return 0;
            }
            return edge1 + edge2 + edge3;
        }

        //多加friend
        friend double show_data(Triangle t);
};

double show_data(Triangle t) {
    cout << "1: " << t.edge1 << "、2: " << t.edge2 << "、3: " << t.edge3 << endl;
    return 0;
}
int main() {
    Triangle t;
    double a, b, c;

    cin >> a >> b >> c;
    t.set(a, b, c);

    if (t.istri()) {
        cout << "三角形的周長: " << t.perimeter() << endl;
        cout << "三角形的面積: " << t.area() << endl;
        show_data(t);
    } 
    else cout << "不是三角形" << endl;

    

    return 0;
}

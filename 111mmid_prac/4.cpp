#include <bits/stdc++.h>
using namespace std;

struct student {
    int id;
    float mathGrade;
    float chineseGrade;
    float average;
};
int main() {

    int n;
    cout << "Enter number of classmates: " << endl;
    cin >> n;
    student s[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter " << i << "th student's student id: " ;
        cin >> s[i].id;
        cout << "Enter " << i << "th student's math grade: " ;
        cin >> s[i].mathGrade;
        cout << "Enter " << i << "th student's chinese grade: " ;
        cin >> s[i].chineseGrade;
        s[i].average = (s[i].mathGrade + s[i].chineseGrade) / 2;
    }
    sort(s, s + n, [](student a, student b) {
        return a.average > b.average;
    });
    cout << "ID         Average Grade" << endl;
    for (int i = n - 1; i >= 0; i--) cout << s[i].id << "          " << s[i].average << endl;

    while(1) {
        int rank;
        cout << "Enter student rank to find the ID: ";
        cin >> rank;
        cout << "Student with rank " << rank << " is " << s[rank - 1].id << endl;
    }

    return 0;
}
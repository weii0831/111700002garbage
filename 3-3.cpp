#include <bits/stdc++.h>
using namespace std;

typedef struct student {
    string id;       
    int midterm;     
    int final;       
    double total;   
} student;

void func(student* students) {
    students[0].total = students[0].midterm * 0.4 + students[0].final * 0.6;
}

int main() {
    string a;
    int b, c;
    while(cin >> a >> b >> c) {
        student* students = new student[1];
        students[0].id = a;
        students[0].midterm = b;
        students[0].final = c;
        func(students);
        cout << students[0].id << " " << students[0].total << endl;
        delete[] students;
    }    
    return 0;
}
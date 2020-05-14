#include<iostream>
using namespace std;
int main() {
    struct student {
        int numbar;
        char name[30];
        char addrass[20];
        char department[15];
        float gpa;
    }; student st[5];
    for (int i = 0; i < 5; i++) {
        cout << "entar the student numbar:\n";
        cin >> st[i].numbar;
        cout << "entar the student name:\n";
        cin >> st[i].name;
        cout << "entar the student addrass:\n";
        cin >> st[i].addrass;
        cout << "entar the student department:\n";
        cin >> st[i].department;
        cout << "entar the student gpa:\n";
        cin >> st[i].gpa;
    }
    for (int i = 0; i < 5; i++) {
        cout << "============================\n",
            cout << "student numbar=" << st[i].numbar<< "\n";
        cout << "student name=" << st[i].name << "\n";
        cout << "student addrass=" << st[i].addrass << "\n";
        cout << "student department=" << st[i].department << "\n";
        cout << "student gpa=" << st[i].gpa << "\n";
        cout << "============================\n";
    }
    system("pause");
}
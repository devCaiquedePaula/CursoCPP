//
// Created by kiq98 on 12.02.26.
//

#include "variaveis_em_cpp.h"
#include <iostream>

using namespace std;

int main() {
    string name;
    cout << "Put your name: ";
    cin >> name;

    int age;
    cout << "Your age: ";
    cin >> age;

    double height;
    cout << "Your height: ";
    cin >> height;

    char letter;
    cout << "Choose an letter: ";
    cin >> letter;

    bool isStudent;
    cout << "Are you a student: (1 for yes, 0 for no): ";
    cin >> isStudent;

    cout << "Printing datas:" << "\n";
    cout << "Name: " << name << "\n";
    cout << "Age: " << age << "\n";
    cout << "Height: " << height << "\n";
    cout << "Letter: " << letter << "\n";
    if (isStudent == 1) {
        cout << "You're a student." << "\n";
    } else {
        cout << "You aren't a student" << "\n";
    }

    return 0;
}


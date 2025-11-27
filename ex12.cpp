#include <iostream>
using namespace std;

int main() {
    string name;
    int age;

    cin >> name >> age;

    if (age >= 1 && age <= 120) {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
    else {
        cout << "Invalid age. Must be between 1 and 120." << endl;
    }

    return 0;
}
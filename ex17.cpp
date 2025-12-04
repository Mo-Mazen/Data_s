//Anton and Danik
#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int anton_wins = 0;
    int danik_wins = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] == 'A') {
            anton_wins++;
        }
        else {
            danik_wins++;
        }
    }

    if (anton_wins > danik_wins) {
        cout << "Anton" << endl;
    }
    else if (danik_wins > anton_wins) {
        cout << "Danik" << endl;
    }
    else {
        cout << "Friendship" << endl;
    }

    return 0;
}
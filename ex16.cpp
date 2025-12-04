//Nearly Lucky Number
#include <iostream>
#include <string>
using namespace std;

int main() {
    string n;
    int l = 0;   
    for (int i = 0; i < n.length(); i++) {
        if (n[i] == '4' || n[i] == '7') {
            l++;
        }
    }
    if (l == 4 || l == 7) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
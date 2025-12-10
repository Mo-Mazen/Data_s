//Magnets
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int groups = 0;
    int prev = 0;

    for (int i = 0; i < n; i++) {
        int curr;
        cin >> curr;
        if (curr != prev) {
            groups++;
            prev = curr;
        }
    }

    cout << groups << endl;
    return 0;
}
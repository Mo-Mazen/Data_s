//Hulk
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        // Step 1: Print the feeling
        if (i % 2 == 1) {
            cout << "I hate";
        } else {
            cout << "I love";
        }

        // Step 2: Print the connector or the end
        if (i == n) {
            cout << " it";
        } else {
            cout << " that ";
        }
    }

    return 0;
}
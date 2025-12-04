//Tram
#include <iostream>
#include <algorithm> 

using namespace std;

int main() {
    int n;
    cin >> n;

    int current_passengers = 0;
    int min_capacity = 0;

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;

        current_passengers = current_passengers - a;
        current_passengers = current_passengers + b;

        if (current_passengers > min_capacity) {
            min_capacity = current_passengers;
        }
    }

    cout << min_capacity << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    double celsius;
    cin >> celsius;

    double fahrenheit = celsius * 9 / 5 + 32;

    // Multiply by 100, cast to int, then divide to truncate extra decimals
    int temp = fahrenheit * 100;
    double rounded = temp / 100.0;

    cout << rounded << endl;

    return 0;
}
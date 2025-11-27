#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int place = 1;
        int parts[5], count = 0;

        while (n > 0) {
            int digit = n % 10;
            if (digit != 0)
                parts[count++] = digit * place;
            n /= 10;
            place *= 10;
        }

        cout << count << endl;
        for (int i = 0; i < count; ++i)
            cout << parts[i] << " ";
        cout << endl;
    }

    return 0;
}
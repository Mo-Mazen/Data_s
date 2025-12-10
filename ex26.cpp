//Calculating Function
#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    if (n % 2 == 0) {
        cout << n / 2 << endl;
    } else {
        cout << -(n + 1) / 2 << endl;
    }

    return 0;
}

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long n;
    cin >> n;
    
    cout << (long long)(pow(-1, n) * ceil(n / 2.0)) << endl;
    
    return 0;
}
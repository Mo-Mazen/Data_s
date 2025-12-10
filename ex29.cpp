//Presents
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> result(n + 1);

    for (int i = 1; i <= n; ++i) {
        int p;
        cin >> p;
        result[p] = i;
    }

    for (int i = 1; i <= n; ++i) {
        cout << result[i] << " ";
    }

    return 0;
}
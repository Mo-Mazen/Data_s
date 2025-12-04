//Translation
#include <iostream>
#include <string>
#include <algorithm> 

using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
 
    string s_reversed = s;

    reverse(s_reversed.begin(), s_reversed.end());

    if (s_reversed == t) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}       
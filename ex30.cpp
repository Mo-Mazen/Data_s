//Is your horseshoe on the other hoof?
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int s[4];
    
    // Read the 4 colors
    for (int i = 0; i < 4; i++) {
        cin >> s[i];
    }

    // Sort them to bring duplicates together
    sort(s, s + 4);

    int needed = 0;
    
    // Check for adjacent duplicates
    for (int i = 0; i < 3; i++) {
        if (s[i] == s[i+1]) {
            needed++;
        }
    }

    cout << needed << endl;

    return 0;
}
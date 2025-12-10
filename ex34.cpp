//Pangram
#include <iostream>
#include <string>
#include <set>
#include <cctype> // Required for tolower()

using namespace std;

int main() {
    int n;
    cin >> n;
    
    string s;
    cin >> s;

    set<char> distinctLetters;

    for (int i = 0; i < n; i++) {
        // Convert character to lowercase and insert into set
        // The set will automatically discard duplicates
        distinctLetters.insert(tolower(s[i]));
    }

    // Check if we found all 26 letters
    if (distinctLetters.size() == 26) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
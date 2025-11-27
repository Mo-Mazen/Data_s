#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int freq[26] = { 0 }; 
    for (char c : s)
        freq[c - 'a'] = 1; 

    int count = 0;
    for (int i = 0; i < 26; ++i)
        count += freq[i];

    if (count % 2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;

    return 0;
}
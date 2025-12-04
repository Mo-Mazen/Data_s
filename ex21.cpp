//Helpful Maths
#include <iostream>
#include <string>
#include <vector>
#include <algorithm> 

using namespace std;

int main() {
    string s;
    cin >> s;

    vector<char> numbers;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] != '+') {
            numbers.push_back(s[i]);
        }
    }
   
    sort(numbers.begin(), numbers.end());
 
    cout << numbers[0];

    for (int i = 1; i < numbers.size(); i++) {
        cout << "+" << numbers[i];
    }
    
    cout << endl;

    return 0;
}

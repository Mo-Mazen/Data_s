// Vanya and Fence
#include <iostream>

using namespace std;

int main() {
    int n, h;
    
    cin >> n >> h;

    int total_width = 0;
    int person_height;

    
    for (int i = 0; i < n; i++) {
        cin >> person_height;

        if (person_height > h) {
            
            total_width = total_width + 2;
        } else {
            
            total_width = total_width + 1;
        }
    }
    cout << total_width << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    // Data for one group
    string groupName = "Solar Team";
    int judge1 = 85;
    int judge2 = 88;
    int judge3 = 90;
    int bonus = 5;

    // Calculate average score
    double average = (judge1 + judge2 + judge3) / 3.0;

    // Final rating includes bonus
    double finalRating = average + bonus;

    cout << groupName << " final rating: " << finalRating << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    // Data for one shuttle
    string shuttleID = "S1";
    int capacity = 40;
    int passengers = 38;
    string route = "East Gate Line";

    // Calculate load percentage
    double loadPercent = (passengers * 100.0) / capacity;

    cout << "Shuttle " << shuttleID << " on " << route << " is "
        << loadPercent << "% full." << endl;

    // Flag if load exceeds 90%
    if (loadPercent > 90) {
        cout << " Load exceeds 90%! Trip must be flagged." << endl;
    }

    return 0;
}
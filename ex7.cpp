#include <iostream>
using namespace std;

int main() {
    string name = "Dr. Omar";
    int papers = 7;
    int hours = 120;
    string rank = "Professor";

    double baseGrant = 0;

    // Set base grant based on rank
    if (rank == "Professor") baseGrant = 10000;
    else if (rank == "Associate") baseGrant = 7000;
    else if (rank == "Lecturer") baseGrant = 5000;
    else if (rank == "Assistant") baseGrant = 3000;

    // Calculate bonus and penalty
    double bonus = papers * 500;
    double penalty = 0;
    if (hours > 150) penalty = (hours - 150) * 10;

    double totalGrant = baseGrant + bonus - penalty;

    cout << name << " receives a grant of $" << totalGrant << endl;

    return 0;
}
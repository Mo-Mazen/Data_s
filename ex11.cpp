#include <iostream>
using namespace std;

int main() {
    // Data for one ticket
    string ticketID = "T001";
    string department = "Electrical Eng.";
    string priority = "High";
    int hoursToResolve = 4;

    cout << "Ticket " << ticketID << " from " << department
        << " has priority: " << priority
        << " and took " << hoursToResolve << " hours to resolve." << endl;

    // Escalation check
    if (priority == "High" && hoursToResolve > 5) {
        cout << " Escalation needed due to delay in high-priority ticket." << endl;
    }

    return 0;
}
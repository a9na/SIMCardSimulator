#include <iostream>
#include "SIMCard.h"
#include "Network.h"

int main() {
    // Create a SIM card with IMSI number and PIN
    SIMCard sim("123456789012345", "1234");

    // Create a network to authenticate the SIM
    Network network;

    // Try to authenticate the SIM
    if (network.authenticate(sim)) {
        std::cout << "Authentication Successful!" << std::endl;

        // Add some contacts
        sim.addContact("John Doe", "555-1234");
        sim.addContact("Jane Smith", "555-5678");

        // Show stored contacts
        std::cout << "Contacts:" << std::endl;
        sim.showContacts();
    } else {
        std::cout << "Authentication Failed." << std::endl;
    }

    return 0;
}

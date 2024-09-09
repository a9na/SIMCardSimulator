#include <iostream>
#include "SIMCard.h"
#include "Network.h"

int main() {
    SIMCard sim("123456789012345", "1234");

    Network network;

    if (network.authenticate(sim)) {
        std::cout << "Authentication Successful!" << std::endl;

        sim.addContact("John Doe", "555-1234");
        sim.addContact("Jane Smith", "555-5678");

        std::cout << "Contacts:" << std::endl;
        sim.showContacts();
    } else {
        std::cout << "Authentication Failed." << std::endl;
    }

    return 0;
}

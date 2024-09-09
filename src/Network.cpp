#include "Network.h"
#include <iostream>
#include <string>

bool Network::authenticate(const SIMCard& sim) {
    std::string correctIMSI = "123456789012345";
    std::string correctPIN = "1234";

    if (sim.getIMSI() == correctIMSI && sim.getPIN() == correctPIN) {
        return true;
    }
    
    return false;
}

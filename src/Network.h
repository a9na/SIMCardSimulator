#ifndef NETWORK_H
#define NETWORK_H

#include "SIMCard.h"

class Network {
public:
    bool authenticate(const SIMCard& sim);
};

#endif

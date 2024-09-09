#include "SIMCard.h"
#include <iostream>

SIMCard::SIMCard(const std::string& imsi, const std::string& pin) : IMSI(imsi), PIN(pin) {}

std::string SIMCard::getIMSI() const {
    return IMSI;
}

std::string SIMCard::getPIN() const {
    return PIN;
}

void SIMCard::addContact(const std::string& name, const std::string& number) {
    contacts.push_back({name, number});
}

void SIMCard::showContacts() const {
    for (const auto& contact : contacts) {
        std::cout << contact.first << ": " << contact.second << std::endl;
    }
}

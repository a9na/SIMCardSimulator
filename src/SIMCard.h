#ifndef SIMCARD_H
#define SIMCARD_H

#include <string>
#include <vector>
#include <utility>

class SIMCard {
private:
    std::string IMSI;
    std::string PIN;
    std::vector<std::pair<std::string, std::string>> contacts; 

public:
    SIMCard(const std::string& imsi, const std::string& pin);

    std::string getIMSI() const;

    std::string getPIN() const;

    void addContact(const std::string& name, const std::string& number);

    void showContacts() const;
};

#endif

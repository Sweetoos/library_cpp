#pragma once

#include <string>

class Patron
{
private:
    std::string name[2];
    bool isActiveStatus = true;
    std::string phoneNumber;
    std::string address;
    double debt = 0.0;

public:
    Patron(std::string name[2], const std::string &phoneNumber, const std::string &address);
};

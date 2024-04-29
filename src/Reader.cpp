// reader.cpp
#include "Reader.hpp"

Reader::Reader(std::string name[2], const std::string &phoneNumber, const std::string &address)
{
    this->name[0] = name[0];
    this->name[1] = name[1];
    this->phoneNumber = phoneNumber;
    this->address = address;
    this->isActiveStatus = true; // Default value
    this->debt = 0.0;            // Default value
}

// Setters
void Reader::setName(const std::string &firstName, const std::string &lastName)
{
    this->name[0] = firstName;
    this->name[1] = lastName;
}

void Reader::setIsActiveStatus(bool isActive)
{
    this->isActiveStatus = isActive;
}

void Reader::setPhoneNumber(const std::string &phoneNumber)
{
    this->phoneNumber = phoneNumber;
}

void Reader::setAddress(const std::string &address)
{
    this->address = address;
}

void Reader::setDebt(double debt)
{
    this->debt = debt;
}

// Getters
std::string Reader::getName()
{
    return name[0] + " " + name[1];
}

bool Reader::getIsActiveStatus()
{
    return isActiveStatus;
}

std::string Reader::getPhoneNumber()
{
    return phoneNumber;
}

std::string Reader::getAddress()
{
    return address;
}

double Reader::getDebt()
{
    return debt;
}

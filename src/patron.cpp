// reader.cpp
#include "patron.hpp"

Patron::Patron(std::string name[2], const std::string &phoneNumber, const std::string &address)
{
    this->name[0] = name[0];
    this->name[1] = name[1];
    this->phoneNumber = phoneNumber;
    this->address = address;
    this->isActiveStatus = true; // Default value
    this->debt = 0.0;            // Default value
}

// Setters
void Patron::setName(const std::string &firstName, const std::string &lastName)
{
    this->name[0] = firstName;
    this->name[1] = lastName;
}

void Patron::setIsActiveStatus(bool isActive)
{
    this->isActiveStatus = isActive;
}

void Patron::setPhoneNumber(const std::string &phoneNumber)
{
    this->phoneNumber = phoneNumber;
}

void Patron::setAddress(const std::string &address)
{
    this->address = address;
}

void Patron::setDebt(double debt)
{
    this->debt = debt;
}

// Getters
std::string Patron::getName()
{
    return name[0] + " " + name[1];
}

bool Patron::getIsActiveStatus()
{
    return isActiveStatus;
}

std::string Patron::getPhoneNumber()
{
    return phoneNumber;
}

std::string Patron::getAddress()
{
    return address;
}

double Patron::getDebt()
{
    return debt;
}

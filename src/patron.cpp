// reader.cpp
#include "patron.hpp"

Patron::Patron(const std::string patronLogin,
               const std::string patronPassword,
               const std::string firstName,
               const std::string lastName,
               const std::string phoneNumber,
               const std::string address,
               double debt)
{
    this->patronLogin = patronLogin;
    this->patronPassword = patronPassword;
    this->firstName = firstName;
    this->lastName = lastName;
    this->phoneNumber = phoneNumber;
    this->address = address;
    this->isActiveStatus = true; 
    this->debt = 0.0;            
}

// Setters
void Patron::setPatronLogin(const std::string &patronLogin)
{
    this->patronLogin = patronLogin;
}

void Patron::setPatronPassword(const std::string &patronPassword)
{
    this->patronPassword = patronPassword;
}
void Patron::setFirstName(const std::string &firstName)
{
    this->firstName = firstName;
}

void Patron::setLastName(const std::string &lastName)
{
    this->lastName = lastName;
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
std::string Patron::getFirstName()
{
    return firstName;
}
std::string Patron::getLastName()
{
    return lastName;
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

std::string Patron::getPatronLogin()
{
    return patronLogin;
}

std::string Patron::getPatronPassword()
{
    return patronPassword;
}

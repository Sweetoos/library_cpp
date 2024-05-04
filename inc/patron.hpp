#pragma once

#include <string>

class Patron
{
private:
    std::string patronLogin;
    std::string patronPassword;
    std::string firstName;
    std::string lastName;
    bool isActiveStatus = true;
    std::string phoneNumber;
    std::string address;
    double debt = 0.0;

public:
    // Constructors
    Patron(const std::string patronLogin,
           const std::string patronPassword,
           const std::string firstName,
           const std::string lastName,
           const std::string phoneNumber,
           const std::string address,
           double debt);

    // Setters
    void setPatronLogin(const std::string &patronLogin);
    void setPatronPassword(const std::string &patronPassword);
    void setFirstName(const std::string &firstName);
    void setLastName(const std::string &lastName);
    void setIsActiveStatus(bool isActive);
    void setPhoneNumber(const std::string &phoneNumber);
    void setAddress(const std::string &address);
    void setDebt(double debt);

    // Getters
    std::string getPatronLogin();
    std::string getPatronPassword();
    std::string getFirstName();
    std::string getLastName();
    bool getIsActiveStatus();
    std::string getPhoneNumber();
    std::string getAddress();
    double getDebt();
};

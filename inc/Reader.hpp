#pragma once

#include <string>

class Reader
{
private:
    std::string name[2];
    bool isActiveStatus = true;
    std::string phoneNumber;
    std::string address;
    double debt = 0.0;

public:
    //Constructors
    Reader(std::string name[2], const std::string &phoneNumber, const std::string &address);

    // Setters
    void setName(const std::string &firstName, const std::string &lastName);
    void setIsActiveStatus(bool isActive);
    void setPhoneNumber(const std::string &phoneNumber);
    void setAddress(const std::string &address);
    void setDebt(double debt);

    // Getters
    std::string getName();
    bool getIsActiveStatus();
    std::string getPhoneNumber();
    std::string getAddress();
    double getDebt();
};


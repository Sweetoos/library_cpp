#pragma once
#include <string>
#include <array>

class Librarian
{
private:
    std::string login;
    std::string password;
    std::array<std::string, 2> name;
    std::string librarianID;
    bool librarianStatus = false;

public:
    Librarian(std::string login,
              std::string password,
              std::array<std::string, 2> name,
              std::string librarianID);

    
};

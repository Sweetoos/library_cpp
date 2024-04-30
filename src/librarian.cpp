#include "librarian.hpp"

Librarian::Librarian(std::string login,
                     std::string password,
                     std::array<std::string, 2> name,
                     std::string librarianID)
{
    this->login = login;
    this->password = password;
    this->name = name;
    this->librarianID = librarianID;
}
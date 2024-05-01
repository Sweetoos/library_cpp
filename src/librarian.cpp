#include "librarian.hpp"
#include <iostream>

Librarian::Librarian(std::string login,
                     std::string password,
                     std::array<std::string, 2> name,
                     std::string librarianID,
                     bool librarianStatus)
{
    this->login = login;
    this->password = password;
    this->name = name;
    this->librarianID = librarianID;
    this->librarianStatus = librarianStatus;
}

void Librarian::registerLibrarian(Librarian librarian)
{
    std::string temp;
    std::cout << "Give me your login: ";
    std::cin >> temp;
    //if loop to check if given login is available or not, first need to implement this to .dat file
    std::cout << "Give me your password, it must contain: " << std::endl;
    std::cout << "- 1 special symbol" << std::endl;
    std::cout << "- 1 uppercase letter" << std::endl;
    std::cout << "- 1 lowercase letter" << std::endl;
    std::cout << "- 1 number" << std::endl;
    std::cin >> temp;
    //checking if this password is possible
    
    //adding librarianID
    librarian.librarianStatus = true;
    std::cout << "Librarian registered succesfully!" << std::endl;
}

bool Librarian::logIn(Librarian librarian)
{

    return false;
}

void Librarian::setLibrarianLogin(std::string login)
{
    this->login = login;
}

void Librarian::setLibrarianPassword(std::string password)
{
    this->password = password;
}

void Librarian::setLibrarianName(std::array<std::string, 2> name)
{
    this->name[0] = name[0];
    this->name[1] = name[1];
}

void Librarian::setLibrarianID(std::string librarianID)
{
    this->librarianID = librarianID;
}

std::string Librarian::getLibrarianLogin(std::string login)
{
    return login;
}

std::string Librarian::getLibrarianPassword(std::string password)
{
    return password;
}

std::array<std::string, 2> Librarian::getLibrarianName(std::array<std::string, 2> name)
{
    return name;
}

std::string Librarian::getLibrarianID(std::string librarianID)
{
    return librarianID;
}

#pragma once
#include <string>
#include <array>

class Librarian
{
private:
    std::string login;
    std::string password;
    std::array<std::string, 2> name;
    static std::string librarianID;
    bool librarianStatus = false;

public:
    Librarian(std::string login,
              std::string password,
              std::array<std::string, 2> name,
              std::string librarianID,
              bool librarianStatus);

    //Additional functions
    void registerLibrarian(Librarian librarian);
    bool logIn(Librarian librarian);

    // Setters
    void setLibrarianLogin(std::string login);
    void setLibrarianPassword(std::string password);
    void setLibrarianName(std::array<std::string,2> name);
    void setLibrarianID(std::string librarianID);

    // Getters
    std::string getLibrarianLogin(std::string login);
    std::string getLibrarianPassword(std::string password);
    std::array<std::string, 2> getLibrarianName(std::array<std::string,2> name);
    std::string getLibrarianID(std::string librarianID);
};

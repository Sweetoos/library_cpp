#pragma once
#include <string>
#include <list>
#include <array>

class Book
{
private:
    static std::string bookID;
    std::string title;
    int isbn;
    int releaseYear;

protected:
    std::list<std::array<std::string, 2>> authors; // Surname and name
    std::list<std::string> genres;

public:
    // Constructors
    Book(
        std::string bookID,
        std::string title,
        std::list<std::array<std::string, 2>> authors,
        std::list<std::string> genres,
        int isbn,
        int releaseYear);

    // Setters
    void setBookID(std::string bookID);
    void setTitle(std::string title);
    void setAuthors(std::list<std::array<std::string, 2>> authors);
    void setGenre(std::list<std::string> genres);
    void setIsbn(int isbn);
    void setReleaseYear(int releaseYear);

    // Getters
    std::string getBookID();
    std::string getTitle();
    std::list<std::array<std::string, 2>> getAuthors();
    std::list<std::string> getGenre();
    int getIsbn();
    int getReleaseYear();

    // Additional methods
};

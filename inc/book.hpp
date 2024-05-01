#pragma once
#include <string>
#include <list>
#include <array>

class Book
{
private:
    static std::string bookID;
    std::string title;
    std::list<std::array<std::string, 2>> authors; // Surname and name
    std::list<std::string> genres;
    int isbn;
    int releaseYear;

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

    //Add methods
    void addGenre(const std::string &genre);
    void addAuthor(const std::array<std::string, 2> &author);

    //Remove methods
    void removeGenre(const std::string &genre);
    void removeAuthor(const std::array<std::string, 2> &author);

    // Additional methods
};

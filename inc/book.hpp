#pragma once
#include <string>
#include <list>
#include <array>

class Book
{
private:
    std::string bookID;
    std::string title;
    std::list<std::array<std::string, 2>> authors; // Surname and name
    std::list<std::string> genres;
    int isbn;
    int releaseYear;

public:
    //Constructors
    Book(
        std::string title,
        std::list<std::array<std::string, 2>> authors,
        std::list<std::string> genres,
        int isbn,
        int releaseYear);

    // Setters
    void setTitle(std::string title);
    void setAuthors(std::list<std::array<std::string, 2>> authors);
    void setGenre(std::list<std::string> genres);
    void setIsbn(int isbn);
    void setReleaseYear(int releaseYear);

    // Getters
    std::string getTitle();
    std::list<std::array<std::string, 2>> getAuthors();
    std::list<std::string> getGenre();
    int getIsbn();
    int getReleaseYear();

    // Additional methods
    void addGenre(std::string genre);
    void removeGenre(std::string genre);
    void addAuthor(std::string author);
    void removeAuthor(std::string author);

};

#pragma once
#include <string>
#include <list>

class Book
{
private:
    std::string title;
    std::string author[2]; // Surname and name
    std::list<std::string> genreList;
    int isbn;
    int releaseYear;

public:
    Book(
        std::string title,
        std::string author[2],
        std::list<std::string> genreList,
        int isbn,
        int releaseYear);

    void setTitle(std::string title);
    void setAuthor(std::string author[2]);
    void setGenre(std::list<std::string> genreList);
    void setIsbn(int isbn);
    void setReleaseYear(int releaseYear);
    std::string getTitle();
    std::string getAuthor();
    std::list<std::string> getGenre();
    int getIsbn();
    int getReleaseYear();
    void addGenre(std::string genre);
    void removeGenre(std::string genre);
};

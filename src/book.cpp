#include "book.hpp"

// Constructors
Book::Book(std::string title, std::list<std::array<std::string, 2>> authors, std::list<std::string> genres, int isbn, int releaseYear)
{
    this->title = title;
    this->authors = authors;
    this->genres = genres;
    this->isbn = isbn;
    this->releaseYear = releaseYear;
}

// Setters
void Book::setTitle(std::string title)
{
    this->title = title;
}

void Book::setAuthors(std::list<std::array<std::string, 2>> authors)
{
    this->authors = authors;
}

void Book::setGenre(std::list<std::string> genres)
{
    this->genres = genres;
}

void Book::setIsbn(int isbn)
{
    this->isbn = isbn;
}

void Book::setReleaseYear(int releaseYear)
{
    this->releaseYear = releaseYear;
}

// Getters
std::string Book::getTitle()
{
    return title;
}

std::list<std::array<std::string, 2>> Book::getAuthors()
{
    return authors;
}

std::list<std::string> Book::getGenre()
{
    return genres;
}

int Book::getIsbn()
{
    return isbn;
}

int Book::getReleaseYear()
{
    return releaseYear;
}

// Additional methods
void Book::addGenre(std::string genre)
{
    genres.push_back(genre);
}

void Book::removeGenre(std::string genre)
{
    genres.remove(genre);
}

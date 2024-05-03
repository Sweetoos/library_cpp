#include "bookManager.hpp"

// Additional methods
void BookManager::addGenre(const std::string &genre, Book book, Librarian librarian)
{
    genres.push_back(genre);
}

void BookManager::removeGenre(const std::string &genre, Book book, Librarian librarian)
{
    genres.remove(genre);
}

void BookManager::addAuthor(const std::array<std::string, 2> &author, Book book, Librarian librarian)
{
    authors.push_back(author);
}

void BookManager::removeAuthor(const std::array<std::string, 2> &author, Book book, Librarian librarian)
{
    authors.remove(author);
}
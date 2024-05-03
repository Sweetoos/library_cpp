#pragma once
#include "book.hpp"
#include "librarian.hpp"

class BookManager : public Book, public Librarian
{
public:
    void addBook(Book book, Librarian librarian);
    void getBackBook(Book book, Librarian librarian);
    void removeBook(Book book, Librarian librarian);

    // Add methods
    void addGenre(const std::string &genre, Book book, Librarian librarian);
    void addAuthor(const std::array<std::string, 2> &author, Book book, Librarian librarian);

    // Remove methods
    void removeGenre(const std::string &genre, Book book, Librarian librarian);
    void removeAuthor(const std::array<std::string, 2> &author, Book book, Librarian librarian);
};
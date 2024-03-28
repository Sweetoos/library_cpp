#include "book.hpp"

Book::Book(std::string title, std::string author[2], std::list<std::string> genre, int isbn, int releaseYear)
{
    this->title = title;
    this->author[2] = author[2];
    this->genreList = genreList;
    this->isbn = isbn;
    this->releaseYear = releaseYear;
}
void Book::setTitle(std::string title)
{
    this->title = title;
}

void Book::setAuthor(std::string author[2])
{
    this->author[2] = author[2];
}
void Book::setGenre(std::list<std::string> genreList) 
{
    this->genreList=genreList;
}
std::list<std::string> Book::getGenre()
{
    return genreList;
}
void Book::setIsbn(int isbn) 
{
    this->isbn=isbn;
}
void Book::setReleaseYear(int releaseYear) 
{
    this->releaseYear=releaseYear;
}
std::string Book::getTitle() 
{
    return title;
}
std::string Book::getAuthor() 
{
    return author[2];
}

int Book::getIsbn() 
{
    
}
int Book::getReleaseYear() {}
void Book::addGenre(std::string genre)
{
    genreList.push_back(genre);
}
void Book::removeGenre(std::string genre)
{
    genreList.remove(genre);
}


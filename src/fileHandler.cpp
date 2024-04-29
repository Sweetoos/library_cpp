#include "fileHandler.hpp"
#include <fstream>
#include <string>
#include <iostream>

std::ofstream booksOut("books.dat");
std::ofstream readersOut("readers.dat");

void saveFile(std::string fileName)
{
    std::ifstream file(fileName);
    if(!file.is_open())
    {
        std::cerr << "Couldn't open " << fileName << " file" << std::endl;
        return;
    }
}


#include "FilmDatabase.h"

// Initializing the static count
int FilmDatabase::count = 0;

// Constructor
FilmDatabase::FilmDatabase(std::string databaseName) : dbName(std::move(databaseName)) {
    count++; // Incrementing the static count
}

// Destructor
FilmDatabase::~FilmDatabase() = default;

// Static method to get the count
int FilmDatabase::getCount() {
    return count;
}

// Display database information
void FilmDatabase::displayInfo() const {
    std::cout << "Database Name: " << dbName << std::endl;
    std::cout << "Number of databases (using this pointer): " << this->getCount() << std::endl;
}



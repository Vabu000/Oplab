#include "Movie.h"

// Constructor
Movie::Movie(std::string movieTitle, int movieYear, std::string actorName, int actorAge)
        : title(std::move(movieTitle)), year(movieYear), leadActor(std::move(actorName), actorAge) {}

// Copy constructor
Movie::Movie(const Movie& other) : title(other.title), year(other.year), leadActor(other.leadActor) {
    std::cout << "Movie Copy constructor called." << std::endl;
}

// Move constructor
Movie::Movie(Movie&& other) noexcept : title(std::move(other.title)), year(other.year), leadActor(std::move(other.leadActor)) {
    std::cout << "Movie Move constructor called." << std::endl;
}

// Destructor
Movie::~Movie() = default;

// Display movie information
void Movie::displayInfo() const {
    std::cout << "Title: " << title << ", Year: " << year << std::endl;
    leadActor.displayInfo();
}

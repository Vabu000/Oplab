
#ifndef UNTITLED1_MOVIE_H
#define UNTITLED1_MOVIE_H

#ifndef MOVIE_H
#define MOVIE_H

#include <iostream>
#include <string>
#include "Actor.h"

class Movie {
private:
    std::string title;
    int year;
    Actor leadActor;

public:
    explicit Movie(std::string movieTitle, int movieYear, std::string actorName, int actorAge);

    // Copy constructor
    Movie(const Movie& other);

    // Move constructor
    Movie(Movie&& other) noexcept;

    ~Movie();

    void displayInfo() const;
};

#endif // MOVIE_H

#endif //UNTITLED1_MOVIE_H

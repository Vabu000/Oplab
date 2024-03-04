#include <iostream>
#include "Actor.h"
#include "Movie.h"
#include "FilmDatabase.h"

int main() {
    // Creating FilmDatabase
    FilmDatabase database("MyFilmDatabase");
    database.displayInfo();
    std::cout << "Number of databases: " << FilmDatabase::getCount() << std::endl;

    // Creating Movie
    Movie movie("Fight Club", 1999, "Edward Norton", 51);
    movie.displayInfo();

    // Creating Actors
    Actor actor("Tom Hanks", 65);
    actor.displayInfo();

    Actor anotherActor("Brad Pitt");
    anotherActor.displayInfo();

    // Using unary operator -
    Actor negatedActor = -actor;
    std::cout << "\nNegated Actor:" << std::endl;
    negatedActor.displayInfo();

    // Using binary operator +
    Actor combinedActor = actor + anotherActor;
    std::cout << "\nCombined Actors:" << std::endl;
    combinedActor.displayInfo();

    return 0;
}

#include "Actor.h"

// Constructor
Actor::Actor(std::string actorName, int actorAge) : name(std::move(actorName)), age(actorAge) {}

// Constructor with default age
Actor::Actor(std::string actorName) : Actor(std::move(actorName), 25) {}

// Copy constructor
Actor::Actor(const Actor& other) : name(other.name), age(other.age) {
    std::cout << "Copy constructor called." << std::endl;
}

// Move constructor
Actor::Actor(Actor&& other) noexcept : name(std::move(other.name)), age(other.age) {
    std::cout << "Move constructor called." << std::endl;
}

// Destructor
Actor::~Actor() = default;

// Unary operator -
Actor Actor::operator-() const {
    Actor result = *this;
    result.age = -result.age;
    return result;
}

// Binary operator +
Actor Actor::operator+(const Actor& other) const {
    Actor result(name + " and " + other.name, age + other.age);
    return result;
}

// Display actor information
void Actor::displayInfo() const {
    std::cout << "Name: " << name << ", Age: " << age << std::endl;
}

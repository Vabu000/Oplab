//
// Created by Ivan on 04.03.2024.
//

#ifndef UNTITLED1_ACTOR_H
#define UNTITLED1_ACTOR_H


#ifndef ACTOR_H
#define ACTOR_H

#include <iostream>
#include <string>

class Actor {
private:
    std::string name;
    int age;

public:
    explicit Actor(std::string actorName, int actorAge);
    explicit Actor(std::string actorName);

    // Copy constructor
    Actor(const Actor& other);

    // Move constructor
    Actor(Actor&& other) noexcept;

    ~Actor();

    // Unary operator -
    Actor operator-() const;

    // Binary operator +
    Actor operator+(const Actor& other) const;

    void displayInfo() const;
};

#endif // ACTOR_H


#endif //UNTITLED1_ACTOR_H

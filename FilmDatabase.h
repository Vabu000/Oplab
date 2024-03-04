#ifndef UNTITLED1_FILMDATABASE_H
#define UNTITLED1_FILMDATABASE_H

#include <iostream>
#include <string>

class FilmDatabase {
private:
    std::string dbName;
    static int count;

public:
    explicit FilmDatabase(std::string databaseName);

    ~FilmDatabase();

    static int getCount();

    void displayInfo() const;
};



#endif

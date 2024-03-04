cmake_minimum_required(VERSION 3.26)
project(untitled1)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled1 main.cpp
        Actor.cpp
        Actor.h
        movie.cpp
        movie.h
        FsimDataBase.cpp
        FsimDataBase.h
        FilmDatabase.cpp
        FilmDatabase.h)

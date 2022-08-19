#ifndef MOVIES_H
#define MOVIES_H

#include <iostream>
#include <vector>

#include "Movie.h"

class Movies {
private:
std::vector<Movie> list {};

public:
//constructors
Movies() {};
//methods
void display();
bool add_movie(std::string n, std::string r, int w);
bool increment_watched(std::string n);
std::string findMovie(std::string name);
};

#endif // MOVIES_H

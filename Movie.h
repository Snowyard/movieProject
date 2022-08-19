#ifndef MOVIE_H
#define MOVIE_H

#include <iostream>
#include <string>

class Movie {
private:
    std::string name {};
    std::string rating {};
    int watchCount {};
    friend class Movies;
public:
Movie(std::string n, std::string r, int w)
    : name{n}, rating{r}, watchCount{w} {
}
};

#endif // MOVIE_H

#include <iostream>
#include "Movie.h"
#include "Movies.h"


void add_movie(Movies &movies, std::string name, std::string rating, int watchCount);
void increment_watched(Movies &movies, std::string name);

int main() {
    
    Movies my_movies;
    
    add_movie(my_movies, "Cinderella", "R-Rated", 0);
    add_movie(my_movies, "Curious George", "PG-13", 2);
    
    add_movie(my_movies, "Cinderella", "PG-13", 2);
    my_movies.display();

    increment_watched(my_movies, "Curious George");
    my_movies.display();
    
    return 0;
}

void add_movie(Movies &movies, std::string name, std::string rating, int watchCount) {
    if(movies.add_movie(name, rating, watchCount)) {
        std::cout << name << " added to collection.\n" << std::endl;
    } else {
        std::cout << "You already have this movie.\n" << std::endl;
    }
}

void increment_watched(Movies &movies, std::string name) {
    if(movies.increment_watched(name)) {
        std::cout << "Incremented watch count by 1 for " << movies.findMovie(name) << "\n" << std::endl;
    } else {
        std::cout << "No movie found" << std::endl;
    }
}



#include "Movies.h"
#include <vector>

//constructors

//methods
bool Movies::add_movie(std::string n, std::string r, int w) {
    int x {0};
    for(int i{0}; i < list.size(); i++) {
        if(n == (list.at(i)).name) {
            x++;
        }
    }
    if(x == 0) {
        list.push_back(Movie(n, r, w));
        return true;
    } else {
        x = 0;
        return false;
    }
}

void Movies::display() {
    
    if(list.size() == 0) {
        std::cout << "You have no movies at the moment." << std::endl;
    }
    
    else {
        std::cout << "\n======================\n";
        for(int i = 0; i < list.size(); i++) {
            std::cout << list.at(i).name << ", " << list.at(i).rating << " " << list.at(i).watchCount << std::endl;
        }
        std::cout << "\n======================\n\n";
    }
}

 bool Movies::increment_watched(std::string n) {
     int x {0};
     for(int i{0}; i < list.size(); i++) {
         if(n == (list.at(i)).name) {
             x++;
             (list.at(i).watchCount)++;
         }
     }
     
     if(x > 0) 
         return true;
     
     else
         return false;
 }
 
 std::string Movies::findMovie(std::string name) {
     for(int i = 0; i < list.size(); i++) {
         if(name == (list.at(i)).name) {
             return (list.at(i)).name;
         }
     }
     return "No Movie Found";
 }


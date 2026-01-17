// Create a class representing a Movie with attributes like title, genre, and releasedYear.
// Demonstrate the instantiation of objects using array and accessing their attributes.

#include <iostream>
#include <string>
using namespace std;

// Define the Movie class
class Movie {
public:
    string title;
    string genre;
    int releasedYear;

    // Constructor
    Movie(string t, string g, int y) {
        title = t;
        genre = g;
        releasedYear = y;
    }
};

int main() {
    // Instantiate Movie objects and store them in an array
    Movie movies[] = {
        Movie("Inception", "Sci-Fi", 2010),
        Movie("The Dark Knight", "Action", 2008),
        Movie("Interstellar", "Sci-Fi", 2014)
    };

    int size = sizeof(movies) / sizeof(movies[0]);

    // Access and display attributes
    for (int i = 0; i < size; i++) {
        cout << "Title: " << movies[i].title << endl;
        cout << "Genre: " << movies[i].genre << endl;
        cout << "Released Year: " << movies[i].releasedYear << endl;
        cout << "----------------------" << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

class Movie {
    private:       // private attribute 
        string rating;
    public:
        string title;
        string director;
        Movie(string aTitle, string aDirector, string aRating) {
            title = aTitle;
            director = aDirector;
            setRating(aRating);
        }

        void setRating(string aRating) { // used to access private attribute in Movie class above
            if(aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "R" || aRating == "NR"){         rating = aRating;
            } else {
                rating = "NR";
            }
            }
        
        string getRating() {
            return rating;
        }
};


int main () {

    Movie avengers("The avengers", "Joss Whedon", "PG-13");

    avengers.setRating("G");

    cout << avengers.getRating();

    return 0;

}


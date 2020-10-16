#include <iostream>

using namespace std;

class Book {
    public:
        string title;
        string author;
        int pages;
     
        Book() {
            title = "no title";
            author = "no autor";
            pages = 0;
        }

        Book(string aTitle, string aAuthor, int aPages) {
            title = aTitle;
            author = aAuthor;
            pages = aPages;

        }
};


int main() {
    
    Book book1("Fighting Irish", "Kyle Pairish", 500);
    
    Book book2("Fighting me", "Kyle Pa", 1400);

    Book book3;

    cout << book1.title;
    cout << book3.title;

    return 0;


}

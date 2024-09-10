#include <iostream>
using namespace std;

class Book {
public:
    string title, author;
    int ISBN;
    bool available;

    void checkout() {
        if (available) {
            available = false;
            cout << "Book checked out." << endl;
        } else {
            cout << "Book already checked out." << endl;
        }
    }

    void returnBook() {
        available = true;
        cout << "Book returned." << endl;
    }

    void display() {
        if (available)
            cout << "Title: " << title << ", Author: " << author << ", ISBN: " << ISBN << endl;
    }
};

int main() {
    Book library[3];
    for (int i = 0; i < 3; i++) {
        cout << "Enter title, author, and ISBN: ";
        cin >> library[i].title >> library[i].author >> library[i].ISBN;
        library[i].available = true;
    }

    // Display available books
    cout << "Available books:" << endl;
    for (int i = 0; i < 3; i++) {
        library[i].display();
    }


    library[0].checkout();
    library[1].checkout();
    library[0].returnBook();


    cout << "Updated available books:" << endl;
    for (int i = 0; i < 3; i++) {
        library[i].display();
    }

    return 0;
}


#include <iostream>
using namespace std;

class Book
{
    string bookTitle;
    string bookAuthor;

public:
    void setBook()
    {
        cout << "\nEnter book title: ";
        getline(cin, bookTitle);
        cout << "Enter book author: ";
        getline(cin, bookAuthor);
    }

    void displayBook() const
    {
        cout << "\nTitle : " << bookTitle
             << "\nAuthor: " << bookAuthor << endl;
    }
};

int main()
{
    const int numBooks = 5;
    Book* library = new Book[numBooks];

    for (int i = 0; i < numBooks; i++)
    {
        cout << "\n--- Book " << (i + 1) << " ---";
        library[i].setBook();
    }

    cout << "\n=== Book List ===";
    for (int i = 0; i < numBooks; i++)
    {
        library[i].displayBook();
    }

    delete[] library; // free the allocated memory
}

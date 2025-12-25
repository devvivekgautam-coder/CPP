#include <iostream>
using namespace std;

class Book {
protected:
    int bookID;
    string title;
    string author;
    bool isIssued;

public:
    Book() {
        isIssued = false;
    }

    void addBook(int id, string t, string a) {
        bookID = id;
        title = t;
        author = a;
        isIssued = false;
    }

    void viewBookDetails() {
        cout << "Book ID   : " << bookID << endl;
        cout << "Title     : " << title << endl;
        cout << "Author    : " << author << endl;
        cout << "Status    : " << (isIssued ? "Issued" : "Available") << endl;
    }

    bool getStatus() {
        return isIssued;
    }

    int getBookID() {
        return bookID;
    }
};

class IssuedBook : public Book {
private:
    string issuedTo;
    string issueDate;

public:
    void issueBook(string name, string date) {
        if (isIssued) {
            cout << "Book already issued!" << endl;
        } else {
            issuedTo = name;
            issueDate = date;
            isIssued = true;
            cout << "Book issued successfully" << endl;
        }
    }

    void returnBook() {
        if (!isIssued) {
            cout << "Book is already available" << endl;
        } else {
            isIssued = false;
            cout << "Book returned successfully" << endl;
        }
    }

    void viewIssuedDetails() {
        viewBookDetails();
        if (isIssued) {
            cout << "Issued To : " << issuedTo << endl;
            cout << "Issue Date: " << issueDate << endl;
        }
    }
};

int main() {
    IssuedBook books[5];
    int count = 0;
    int choice;

    do {
        cout << "---- Library Management System ----" << endl;
        cout << "1. Add Book" << endl;
        cout << "2. Issue Book" << endl;
        cout << "3. Return Book" << endl;
        cout << "4. View All Books" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            int id;
            string title, author;
            cout << "Enter Book ID: ";
            cin >> id;
            cin.ignore();
            cout << "Enter Title: ";
            getline(cin, title);
            cout << "Enter Author: ";
            getline(cin, author);

            books[count].addBook(id, title, author);
            count++;
        }

        else if (choice == 2) {
            int id;
            string name, date;
            cout << "Enter Book ID to issue: ";
            cin >> id;
            cin.ignore();

            for (int i = 0; i < count; i++) {
                if (books[i].getBookID() == id) {
                    cout << "Issued To: ";
                    getline(cin, name);
                    cout << "Issue Date: ";
                    getline(cin, date);
                    books[i].issueBook(name, date);
                }
            }
        }

        else if (choice == 3) {
            int id;
            cout << "Enter Book ID to return: ";
            cin >> id;

            for (int i = 0; i < count; i++) {
                if (books[i].getBookID() == id) {
                    books[i].returnBook();
                }
            }
        }

        else if (choice == 4) {
            for (int i = 0; i < count; i++) {
                cout << endl <<  "Book " << i + 1 << " Details:" << endl;
                books[i].viewIssuedDetails();
            }
        }

    } while (choice != 0);

    return 0;
}
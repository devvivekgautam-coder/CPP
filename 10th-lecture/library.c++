#include <iostream>
#include <string>
using namespace std;

class Book {
protected:
    int bookId;
    string title;
    string author;
    bool isIssued;

public:
    void addBook(int bookId, string title, string author) {
        this->bookId = bookId;
        this->title = title;
        this->author = author;
        isIssued = false;
    }

    void viewBook() {
        cout << "Book ID    : " << bookId << endl;
        cout << "Title      : " << title << endl;
        cout << "Author     : " << author << endl;
        cout << "Issued     : " << (isIssued ? "Yes" : "No") << endl;
    }

    int getBookId() {
        return bookId;
    }

    bool getIssueStatus() {
        return isIssued;
    }

    void setIssueStatus(bool status) {
        isIssued = status;
    }
};

class IssuedBook : public Book {
protected:
    string issuedTo;
    string issueDate;

public:
    void issueBook(string name, string date) {
        if (isIssued) {
            cout << "Book already issued!" << endl;
            return;
        }
        issuedTo = name;
        issueDate = date;
        isIssued = true;
        cout << "Book issued successfully." << endl;
    }

    void returnBook() {
        if (!isIssued) {
            cout << "Book is not issued." << endl;
            return;
        }
        isIssued = false;
        issuedTo = "";
        issueDate = "";
        cout << "Book returned successfully." << endl;
    }

    void viewIssueDetails() {
        if (isIssued) {
            cout << "Issued To  : " << issuedTo << endl;
            cout << "Issue Date : " << issueDate << endl;
        }
    }
};

int main() {
    IssuedBook books[10];   // ARRAY of books
    int choice, id;
    int count = 0;
    string title, author, name, date;

    do {
        cout << "====== Library Menu ======" << endl;
        cout << " Press 1 To Add Book. " << endl;
        cout << " Press 2 To View All Books. " << endl;
        cout << " Press 3 To Issue Book. " << endl;
        cout << " Press 4 To Return Book. " << endl;
        cout << " Press 5 To Exit. " << endl;
        cout << "Enter Your Choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {

        case 1: {
            if (count >= 10) {
                cout << "Library full!" << endl;
                break;
            }
            cout << "Enter Book ID: ";
            cin >> id;
            cin.ignore();
            cout << "Enter Title: ";
            getline(cin, title);
            cout << "Enter Author: ";
            getline(cin, author);

            books[count].addBook(id, title, author);
            count++;
            cout << "Book added successfully." << endl;
            break;
        }
            
        case 2: {
            if (count == 0) {
                cout << "No books available." << endl;
            }
            for (int i = 0; i < count; i++) {
                cout << endl << "--- Book " << i + 1 << " ---" << endl;
                books[i].viewBook();
                books[i].viewIssueDetails();
            }
            break;
        }
            
        case 3: {
            cout << "Enter Book ID to Issue: ";
            cin >> id;
            cin.ignore();
            for (int i = 0; i < count; i++) {
                if (books[i].getBookId() == id) {
                    cout << "Issued To: ";
                    getline(cin, name);

                    cout << "Issue Date: ";
                    getline(cin, date);

                    books[i].issueBook(name, date);
                    break;
                }
            }
            break;
        }
            
        case 4: {
            cout << "Enter Book ID to Return: ";
            cin >> id;
            for (int i = 0; i < count; i++) {
                if (books[i].getBookId() == id) {
                    books[i].returnBook();
                    break;
                }
            }
            break;
        }

        case 5: {
            cout << "Exiting program..." << endl;
            break;
        }

        default:
            cout << "Invalid choice!" << endl;
        }

    } while (choice != 5);

    return 0;
}
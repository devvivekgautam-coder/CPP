#include <iostream>
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
            this->isIssued = false;
        }

        void viewBook() {
            cout << endl << "----------------- Printing Books Details -----------------" << endl;
            cout << "Book Id    : " << this->bookId << endl;
            cout << "Title      : " << this->title << endl;
            cout << "Author     : " << this->author << endl;
            cout << "Status     : " << (isIssued ? "Yes" : "No");
        }

        int getbookId() {
            return bookId;
        }

        
    };
    
    class IssuedBook : public Book {
        protected:
        string issuedToo;
        string issuedDate;
        int issuedBookID;
        
        public:
        void issueBook(string issuedToo, string issuedDate,int rid) {
            this->issuedToo = issuedToo;
            this->issuedDate = issuedDate;
            this->isIssued = true;
            this->issuedBookID = rid;
        }
        
        int status () {
            return issuedBookID;
        }

        bool returnBook() {
            this->isIssued = false;
        }
        
    };
    
int main () {
    IssuedBook array[5];
    int choice, idx = 0;
    do
    {
        
    cout << endl << "-------- Welcome To Library Management System ---------" << endl;
    cout << "Press 1 To Add New Book." << endl;
    cout << "Press 2 To View Book." << endl;
    cout << "Press 3 To Issue Book." << endl;
    cout << "Press 4 To Return Book." << endl;
    cout << "Press 5 To Exit." << endl;
    cout << "Enter Your Choice : ";
    cin >> choice;

    switch (choice) {
        case 1: {
            int id;
            string title, author;

            cout << "Enter Book Id : ";
            cin >> id;

            cin.ignore();
            cout << "Enter Book Title : ";
            getline(cin, title);

            cout << "Enter Book Author Name : ";
            getline(cin, author);

            array[idx++].addBook(id, title, author);
            cout << "Book Added Successfully." << endl;

            break;
        }
        case 2: {
            if (idx == 0) {
                cout << "No Book Added Yet.";
                break;
            }

            for (int i = 0; i < idx; i++) {
                array[i].viewBook();
            }

            break;
        }
        case 3: {
            int id;
            int rid;
            string issuedToo, issuedDate;
            cout << "Enter Book ID To Issued : ";
            cin >> id;

            if (idx == 0) {
                cout << "No Book Added Yet.";
                break;
            }
            bool found = false;

            for (int i = 0; i < idx; i++) {
                if (id == array[i].getbookId()) {

                rid = id;
                cin.ignore();
                cout << "Enter Bowrer Name : ";
                getline(cin, issuedToo);

                cout << "Enter Bowrer Date : ";
                getline(cin, issuedDate);

                array[i].issueBook(issuedToo, issuedDate,rid);
                found = true;

                cout << "Issuing Successful !!!" << endl;
                }
            }

            break;
        }
        case 4: {
            int id;
            cout << "Enter Book ID To Return : ";
            cin >> id;

            for (int i = 0; i < idx; i++) {
                if (id == array[i].getbookId()) {
                    if(array[i].status() == id) {
                        array[i].returnBook();
                    }
                }
            }

            break;
        }
        case 5: {
            cout << "Thank You !!!" << endl;
            break;
        }
        default:
            cout << "Enter A Valid Choice : " << endl;
    }

    } while (choice != 5);
    
    return 0;
}
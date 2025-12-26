#include <iostream>
#include <vector>
#include <string>
using namespace std;

class LibraryItem {
    private:
        string title;
        string author;
        string dueDate;

    public:
        LibraryItem(string title, string author, string dueDate) {
            this->title = title;
            this->author = author;
            this->dueDate = dueDate;
        }

        void displayBookData() {
            cout << "Title    : " << this->title << endl;
            cout << "Author   : " << this->author << endl;
            cout << "Due Date : " << this->dueDate << endl;
        }

        void setDueData(string dueData) {
            this->dueDate = dueDate;
        }

        virtual void checkOut() = 0;
        virtual void returnItem() = 0;
        virtual void displayDetails() = 0;

        virtual ~LibraryItem() {

        }
};

class Book : public LibraryItem {
    protected:
        int quantity;

    public:
        Book(string title, string author, string dueDate, int quantity)
            : LibraryItem(title, author, dueDate) {
            this->quantity = quantity;
            }

        void checkOut() override {
            if (quantity > 0) {
                quantity--;
                setDueData("15 Days");
                cout << "Book Checked Successfully." << endl;
            }
            else {
                cout << "Book Not Avalable." << endl;
            }
        };

        void returnItem() override {
            quantity++;
            setDueData("Returned");
            cout << "Book Returned Successfully." << endl;
        };

        void displayDetails() override {
            displayBookData();
            cout << "Quantity : " << quantity << endl;
        };

};

class DVD : public LibraryItem {
    protected:
        string duration;
    public:

        DVD(string title, string author, string dueDate, string duration)
            : LibraryItem(title, author, dueDate) {
            this->duration = duration;
            }

        void checkOut() override {
            setDueData("7 Days");
            cout << "DVD Checked Out." << endl;
        };

        void returnItem() override {
            setDueData("Returned");
            cout << "DVD Returned Successfully." << endl;
        };

        void displayDetails() override {
            displayBookData();
            cout << "Duration : " << duration << endl;
        };

};

class Magazine : public LibraryItem {
    protected:
        int issueNumber;

    public:
        Magazine(string title, string author, string dueDate, int issueNumber)
            : LibraryItem(title, author, dueDate) {
            this->issueNumber = issueNumber;
            }

        void checkOut() override {
            setDueData("5 Days");
            cout << "Magazine Checked Successfully." << endl;
        };

        void returnItem() override {
            setDueData("Returned");
            cout << "Magazine Returned Successfully." << endl;
        };

        void displayDetails() override {
            displayBookData();
            cout << "Issue Number : " << issueNumber << endl;
        };

};

int main () {
    vector<LibraryItem*> array;
    int choice;
    do {

    cout << "Press 1 To Add New Book. " << endl;
    cout << "Press 2 To Add New DVD. " << endl;
    cout << "Press 3 To Add New Magazine. " << endl;
    cout << "Press 4 To Display All Item. " << endl;
    cout << "Press 5 To Check Out Item. " << endl;
    cout << "Press 6 To Return Item. " << endl;
    cout << "Press 7 To Exit. " << endl;

    cout << "Enter Your Choice : ";
    cin >> choice;

    switch (choice) {
        case 1: {
            string title, author, dueDate;
            int quantity;

            cin.ignore();
            cout << "Enter Book Title : ";
            getline(cin, title);

            cout << "Enter Author Name : ";
            getline(cin, author);

            cout << "Enter Due Date : ";
            getline(cin, dueDate);

            cout << "Enter The Quantity Of Book : ";
            cin >> quantity;

            if (quantity <= 0) {
                cout << "Invalid Quantity." << endl;
                break;
            }

            array.push_back(new Book(title, author, dueDate, quantity));            
            cout << "Book Added Successfully." << endl;

            break;
        }

        case 2: {
            string title, author, dueDate, duration;
            
            cin.ignore();
            cout << "Enter Book Title : ";
            getline(cin, title);

            cout << "Enter Author Name : ";
            getline(cin, author);

            cout << "Enter Due Date : ";
            getline(cin, dueDate);

            cout << "Enter Duration Of DVD : ";
            getline(cin, duration);

            array.push_back(new DVD(title, author, dueDate, duration));
            cout << "DVD Added Successfully." << endl;

            break;
        }

        case 3: {
            string title, author, dueDate;
            int issueNumber;

            cin.ignore();
            cout << "Enter Book Title : ";
            getline(cin, title);

            cout << "Enter Author Name : ";
            getline(cin, author);

            cout << "Enter Due Date : ";
            getline(cin, dueDate);

            cout << "Enter Issue Number : ";
            cin >> issueNumber;

            array.push_back(new Magazine(title, author, dueDate, issueNumber));
            cout << "Magazine Added Successfully." << endl;

            break;
        }

        case 4: {
            for (int i = 0; i < array.size(); i++) {
                cout << "Index of Book : " << i << endl;
                array[i]->displayDetails();
            }
            break;
        }

        case 5: {
            int index;
            cout << "Enter Index Number To Check : ";
            cin >> index;

            if (index >= 0 && index < array.size()) {
                array[index]->checkOut();
            }
            else {
                cout << "Invalid Index." << endl;
            }

            break;
        }

        case 6: {
            int index;
            cout << "Enter Index To Return : ";
            cin >> index;

            if (index >= 0 && index < array.size()) {
                array[index]->returnItem();
            }
            else {
                cout << "Invaid Index." << endl;
            }

            break;
        }

        case 7: {
            cout << "Thank You." << endl;
            break;
        }
        
        default:
            cout << "Invalid Choice : ";
    }

    } while (choice != 7);

    for (auto item : array) {
        delete item;
    }
    
    return 0;
}
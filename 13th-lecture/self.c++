#include <iostream>
#include <vector>
using namespace std;

class LibraryItem {
    private:
        string title;
        string author;
        string dueDate;

    public:
        LibraryItem (string title, string author, string dueDate) {
            this->title = title;
            this->author = author;
            this->dueDate = dueDate;
        }

        void displayBookData() {
            cout << "Title     : " << this->title << endl;
            cout << "Author    : " << this->author << endl;
            cout << "Due Date  : " << this->dueDate << endl;
        }

        virtual ~LibraryItem () {

        }

        string setDueDate(string dueDate) {
            this->dueDate = dueDate;
        }

        virtual void checkOut() = 0;
        virtual void returnItem() = 0;
        virtual void displayDetails() = 0;
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
                setDueDate("15 Days");
                cout << "Book Checked Successfully." << endl;
            }
            else {
                cout << "Book Not Available." << endl;
            }
        } 

        void returnItem() override {
            quantity++;
            setDueDate("Returned");
            cout << "Book Returned Successfully." << endl;
        } 

        void displayDetails() override {
            displayBookData();
            cout << "Quantity : " << quantity << endl;
        } 
        
};

class DVD : public LibraryItem {
    protected:
        string duration;
        int quantity;

    public:
        DVD(string title, string author, string dueDate, string duration, int quantity)
            : LibraryItem(title, author, dueDate) {
                this->duration = duration;
                this->quantity = quantity;
            }

            void checkOut() override {
                if (quantity > 0) {
                    quantity--;
                    setDueDate("7 Days");
                    cout << "DVD Checked Successfully." << endl;
                }
            }

            void returnItem() override {
                quantity++;
                setDueDate("Returned");
                cout << "DVD Returned successfully." << endl;
            }

            void displayDetails() override {
                displayBookData();
                cout << "Duration : " << duration << endl;
                cout << "Quantity : " << quantity << endl;
            }
        
};

class Magazine : public LibraryItem {
    protected:
        int issueNumber, quantity;

    public:
        Magazine(string title, string author, string dueDate, int issueNumber, int quantity) 
        : LibraryItem(title, author, dueDate) {
            this->issueNumber = issueNumber;
            this->quantity = quantity;
        }

        void checkOut() override {
            if (quantity > 0) {
                quantity--;
                setDueDate("5 Days");
                cout << "Magazine Checked Successfully." << endl;
            }
        }

        void returnItem() override {
            quantity++;
            setDueDate("Returned");
            cout << "Magazine Returned Successfully." << endl;
        }

        void displayDetails() override {
            displayBookData();
            cout << "Issue Number : " << issueNumber << endl;
            cout << "Quantity : " << quantity << endl;
        }
        
};

int main () {
    vector<LibraryItem*> array;
    int choice;

    do {
    cout << "Press 1 To Add New Book." << endl;
    cout << "Press 2 To Add New DVD." << endl;
    cout << "Press 3 To Add New Magazine." << endl;
    cout << "Press 4 To Display All Items." << endl;
    cout << "Press 5 To Check Item." << endl;
    cout << "Press 6 To Return Item." << endl;
    cout << "Press 7 To Exit." << endl;

    cout << "Enter Your Choice : ";
    cin >> choice;

    string title, author, dueDate;
    int idx, quantity;

    cin.ignore();

    switch (choice) {
        case 1: {
            int quantity;

            cout << "Enter Title Of Book : ";
            getline(cin, title);

            cout << "Enter Author Of Book : ";
            getline(cin, author);

            cout << "Enter Due Date Of Book : ";
            getline(cin, dueDate);

            cout << "Enter Quantity Of Book : ";
            cin >> quantity;

            array.push_back(new Book(title, author, dueDate, quantity));
            cout << "Book Added Successfully." << endl;

            break;
        }

        case 2: {
            string duration;

            cout << "Enter Title Of DVD : ";
            getline(cin, title);

            cout << "Enter Author Of DVD : ";
            getline(cin, author);

            cout << "Enter Due Date Of DVD : ";
            getline(cin, dueDate);

            cout << "Enter Dutation Of DVD : ";
            getline(cin, duration);

            cout << "Enter Quantity Of DVD : ";
            cin >> quantity;

            array.push_back(new DVD(title, author, dueDate, duration, quantity));
            cout << "DVD Added Successfully." << endl;

            break;
        }

        case 3: {
            int issueNumber;

            cout << "Enter Title Of Magazine : ";
            getline(cin, title);

            cout << "Enter Author Of Magazine : ";
            getline(cin, author);

            cout << "Enter Due Date Of Magazine : ";
            getline(cin, dueDate);

            cout << "Enter Issue Number Of Magazine : ";
            cin >> issueNumber;

            cout << "Enter Quantity Of Magazine : ";
            cin >> quantity;

            array.push_back(new Magazine(title, author, dueDate, issueNumber, quantity));
            cout << "Magazine Added Successfully." << endl;

            break;
        }

        case 4: {
            for (int i = 0; i < array.size(); i++) {
                cout << endl << "===========================" << endl;

                cout << "Index : " << i << endl;
                array[i]->displayDetails();

                cout << endl << "===========================" << endl;
            }

            break;
        }

        case 5: {
            cout << "Enter Index Number To Check Out : ";
            cin >> idx;

            if (idx >= 0 && idx < array.size()) {
                array[idx]->checkOut();
            }
            break;
        }

        case 6: {
            cout << "Enter Index To Return Item : ";
            cin >> idx;

            if (idx >= 0 && idx < array.size()) {
                array[idx]->returnItem();
            }
            break;
        }

        case 7: {
            cout << "Thank You!!!" << endl;
            break;
        }

    } } while (choice != 7);
    
    for (auto item : array) {
        delete item;
    }
    
    return 0;
}
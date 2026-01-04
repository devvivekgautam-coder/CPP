#include <iostream>
#include <vector>
using namespace std;

class HospitalMember {
    protected:
        int id;
        string name;

    public:
        HospitalMember(int id, string name) {
            this->id = id;
            this->name = name;
        }

        int getId() {
            return id;
        }

        virtual void checkIn() = 0;
        virtual void checkOut() = 0;
        virtual void displayDetails() = 0;

        virtual ~HospitalMember() {}
};

class Doctor : public HospitalMember {
    protected:
        string specialization;

    public:
        Doctor(int id, string name, string specialization) : HospitalMember(id, name) {
            this->specialization = specialization;
        }

        void checkIn() override {
            cout << "Doctor " << name << " " << "Has On Duty" << endl;
        }
        
        void checkOut() override {
            cout << "Doctor " << name << " " << "Has Off Duty" << endl;
        }

        void displayDetails() {
            cout << "===== Printing Doctor Data =====" << endl;
            cout << "Doctor Id : " << this->id << endl;
            cout << "Doctor Name : " << this->name << endl;
            cout << "Specialization : " << this->specialization << endl;
            cout << "=================================";
        }

};

class Patient : public HospitalMember {
    protected:
        string disease;
        int roomNumber;

    public:
        Patient(int id, string name, string disease, int roomNumber) 
            : HospitalMember(id, name) {
                this->disease = disease;
                this->roomNumber = roomNumber;
        }

        void checkIn() override {
            cout << "Patient " << name << " " << "Admitted To Room Number " << roomNumber << endl;
        }
        
        void checkOut() override {
            cout << "Patient " << name << " " << "Discharged To Room Number " << roomNumber << endl;
        }

        void displayDetails() {
            cout << endl << "===== Printing Patient Data =====" << endl;
            cout << "Id : " << this->id << endl;
            cout << "Name : " << this->name << endl;
            cout << "Disease : " << this->disease << endl;
            cout << "Room NUmber : " << this->roomNumber << endl;
            cout << "==================================";
        }
};

class Nurse : public HospitalMember {
    protected:
        string shift;

    public:
        Nurse(int id, string name, string shift)
            : HospitalMember(id, name) {
                this->shift = shift;
        }

        void checkIn() override {
            cout << "Nurse " << name << " " << "Started" << " " << this->shift << " " << "Shift" << endl;
        }
        
        void checkOut() override {
            cout << "Nurse " << name << " " << "Ended" << " " << this->shift << " " << "Shift" << endl;
        }

        void displayDetails() {
            cout << endl << "===== Printing Nurse Data =====" << endl;
            cout << "Id : " << this->id << endl;
            cout << "Name : " << this->name << endl;
            cout << "Disease : " << this->shift << endl;
            cout << "===============================";
        }
};

int main () {
    vector<HospitalMember*> hospital;
    int choice;
    do {
    cout << endl << "Welocome To Hospital Management System" << endl;
    cout << "Press 1 To Add Doctor : " << endl;
    cout << "Press 2 To Add Patient : " << endl;
    cout << "Press 3 To Add Nurse : " << endl;
    cout << "Press 4 To Check In : " << endl;
    cout << "Press 5 To Check Out : " << endl;
    cout << "Press 6 To Display Details : " << endl;
    cout << "Press 7 To Exit : " << endl;

    cout << "Enter Your Choice : ";
    cin >> choice;

    int id;
    string name;

    if (choice == 1) {
        string special;

        cout << "Enter Dr. Id : ";
        cin >> id;

        cin.ignore();
        cout << "Enter Dr. Name : ";
        getline(cin, name);

        cout << "Enter Dr's Specialization : ";
        getline(cin, special);

        hospital.push_back(new Doctor(id, name, special));
        cout << "Doctor Added successfully." << endl;
    }

    else if (choice == 2) {
        string disease;
        int roomNumber;

        cout << "Enter Patient Id : ";
        cin >> id;

        cin.ignore();
        cout << "Enter Patient Name : ";
        getline(cin, name);

        cout << "Enter Patient Disease : ";
        getline(cin, disease);

        cout << "Enter Patient Room Number : ";
        cin >> roomNumber;

        hospital.push_back(new Patient(id, name, disease, roomNumber));
        cout << "Patient Added Successfully." << endl;
    }

    else if (choice == 3) {
        string shift;

        cout << "Enter Nurse Id : ";
        cin >> id;

        cin.ignore();
        cout << "Enter Nurse Name : ";
        getline(cin, name);

        cout << "Enter Nurse Shift [Day/Night] : ";
        getline(cin, shift);

        hospital.push_back(new Nurse(id, name, shift));
        cout << "Nurse Added Successfully." << endl;
    }

    else if (choice == 4) {
        int key;
        cout << "Enter Your Id : ";
        cin >> key;

        bool found = false;

        for (int i = 0; i < hospital.size(); i++) {
            if (key == hospital[i]->getId()) {
                hospital[i]->checkIn();
                cout << "Check In successfully." << endl;
                found = true;
            }
        }
    }

    else if (choice == 5) {
        int key;
        cout << "Enter Your Id : ";
        cin >> key;

        bool found = false;

        for (int i = 0; i < hospital.size(); i++) {
            if (key == hospital[i]->getId()) {
                hospital[i]->checkOut();
                cout << "Check Out Successfully." << endl;
                found = true;
            }
        }
    }

    else if (choice == 6) {
        for (int i = 0; i < hospital.size(); i++) {
            hospital[i]->displayDetails();
        }
    }

    else if (choice == 7) {
        cout << "Thank You !!!" << endl;
    }

    } while (choice != 7);

    return 0;
}
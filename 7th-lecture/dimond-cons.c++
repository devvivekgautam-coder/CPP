#include <iostream>
using namespace std;

class Companies{
private:
    int comp_id;
    static string comp_name;
    int comp_staff_quantity;
    int comp_revenue;
    int comp_import_raw_diamonds;
    int comp_export_diamonds;
    static string comp_ceo;

public:
    Companies () {}

    Companies(int comp_id, string comp_name, int comp_staff_quantity, int comp_revenue, int comp_import_raw_diamonds, int comp_export_diamonds, string comp_ceo) {
        this->comp_id = comp_id;
        this->comp_staff_quantity = comp_staff_quantity;
        this->comp_revenue = comp_revenue;
        this->comp_import_raw_diamonds = comp_import_raw_diamonds;
        this->comp_export_diamonds = comp_export_diamonds;

        Companies::comp_name = comp_name;
        Companies::comp_ceo = comp_ceo;
    }

    void getCompaniesData () {
        cout << "--------------------------------------------------\n";
        cout << "Company Id : " << comp_id << endl;
        cout << "Company Name : " << comp_name << endl;
        cout << "Staff Quantity : " << comp_staff_quantity << endl;
        cout << "Revenue : " << comp_revenue << endl;
        cout << "Import Diamond : " << comp_import_raw_diamonds << endl;
        cout << "Export Diamond : " << comp_export_diamonds << endl;
        cout << "CEO : " << comp_ceo << endl;
        cout << "--------------------------------------------------\n";
    }
};

string Companies::comp_name = "Tata Moters";
string Companies::comp_ceo = "Ratan Tata";

int main () {
    string name, ceo;
    int id, quantity, revenue, impot, expot, size;

    cout << "Enter How Many Companies You want : ";
    cin >> size;

    Companies arrayComp[size];

    for (int i = 0; i < size; i++) {

        cout << "Enter Id: ";
        cin >> id;

        cin.ignore();
        cout << "Enter Company Name: ";
        getline(cin, name);

        cout << "Enter Staff Quantity: ";
        cin >> quantity;

        cout << "Enter Revenue: ";
        cin >> revenue;

        cout << "Enter Import: ";
        cin >> impot;

        cout << "Enter Export: ";
        cin >> expot;

        cin.ignore();
        cout << "Enter CEO Name: ";
        getline(cin, ceo);

        arrayComp[i] = Companies(id, name, quantity, revenue, impot, expot, ceo);
    }

    for (int i = 0; i < size; i++) {
        arrayComp[i].getCompaniesData();
    }

    return 0;
}
#include <iostream>
using namespace std;

class Admin {
    private:
        double total_annual_revenue;
    
    protected:
        double manager_salary;
        double employee_salary;
        int total_staff;
    
    public:
        string company_name;
        bool can_terminate;

        Admin() {
            company_name = "ABC Technologies";
            manager_salary = 80000;
            employee_salary = 40000;
            total_staff = 120;
            total_annual_revenue = 5000000;
            can_terminate = true;
        }

        virtual void myAccess() {
            cout << endl << "Admin Access : " << endl;
            cout << "Company Name : " << company_name << endl;
            cout << "Manager Salary : " << manager_salary << endl;
            cout << "Employee Salary : " << employee_salary << endl;
            cout << "Total Staff : " << total_staff << endl;
            cout << "Can Terminate : " << can_terminate << endl;
            cout << "Total Annual Revenue : " << total_annual_revenue << endl;
        }
};

class Manager : public Admin {
    public:
        void myAccess() override {
            cout << endl << "Manager Access : " << endl;
            cout << "Company Name : " << company_name << endl;
            cout << "Manager Salary : " << manager_salary << endl;
            cout << "Employee Salary : " << employee_salary << endl;
            cout << "Total Staff : " << total_staff << endl;
            cout << "Can Terminate : " << can_terminate << endl;
        }
};

class Employee : public Manager {
    public:
        void myAccess() override {
            cout << endl << "Employee Access: " << endl;
            cout << "Company Name : " << company_name << endl;
            cout << "Employee Salary : " << employee_salary << endl;
        }
};

int main() {
    Admin a;
    Manager m;
    Employee e;

    a.myAccess();
    m.myAccess();
    e.myAccess();

    return 0;
}
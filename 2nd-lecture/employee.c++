#include <iostream>
using namespace std;

class Employee{
    public:
            int emp_id;
            string emp_name;
            int emp_age;
            string emp_role;
            int emp_salary;
            string emp_city;
            int emp_experience;
            string emp_company_name;
};

int main () {
    Employee emp1, emp2, emp3, emp4, emp5;

    cout << "Press 1 to show Employee1 Details : " << endl;
    cout << "Press 2 to show Employee2 Details : " << endl;
    cout << "Press 3 to show Employee3 Details : " << endl;
    cout << "Press 4 to show Employee4 Details : " << endl;
    cout << "Press 5 to show Employee5 Details : " << endl;

    int num;
    cout << "Enter your choice : ";
    cin >> num;

    switch (num) {
        case 1:
            emp1.emp_id = 1010;
            cout << "Employee's id : " << emp1.emp_id << endl;

            emp1.emp_name = "Sanju";
            cout << "Employee's Name : " << emp1.emp_name << endl;

            emp1.emp_age = 24;
            cout << "Employee's Age : " << emp1.emp_age << endl;

            emp1.emp_role = "Helper";
            cout << "Employee's Role : " << emp1.emp_role << endl;

            emp1.emp_salary = 14000;
            cout << "Employee's Slaray : " << emp1.emp_salary << endl;

            emp1.emp_city = "Surat";
            cout << "Employee's City : " << emp1.emp_city << endl;

            emp1.emp_experience = 1;
            cout << "Employee's Experience : " << emp1.emp_experience << endl;

            emp1.emp_company_name = "Tata";
            cout << "Employee's Company Name : " << emp1.emp_company_name << endl;
        case 2:
            emp2.emp_id = 5050;
            cout << "Employee's id : " << emp2.emp_id << endl;

            emp2.emp_name = "Todoroki";
            cout << "Employee's Name : " << emp2.emp_name << endl;

            emp2.emp_age = 30;
            cout << "Employee's Age : " << emp2.emp_age << endl;

            emp2.emp_role = "Enginner";
            cout << "Employee's Role : " << emp2.emp_role << endl;

            emp2.emp_salary = 180000;
            cout << "Employee's Slaray : " << emp2.emp_salary << endl;

            emp2.emp_city = "New York";
            cout << "Employee's City : " << emp2.emp_city << endl;

            emp2.emp_experience = 5;
            cout << "Employee's Experience : " << emp2.emp_experience << endl;

            emp2.emp_company_name = "Microsoft";
            cout << "Employee's Company Name : " << emp2.emp_company_name << endl;

        case 3:
            emp3.emp_id = 4040;
            cout << "Employee's id : " << emp3.emp_id << endl;

            emp3.emp_name = "Shayamu";
            cout << "Employee's Name : " << emp3.emp_name << endl;

            emp3.emp_age = 24;
            cout << "Employee's Age : " << emp3.emp_age << endl;

            emp3.emp_role = "Worker";
            cout << "Employee's Role : " << emp3.emp_role << endl;

            emp3.emp_salary = 15000;
            cout << "Employee's Slaray : " << emp3.emp_salary << endl;

            emp3.emp_city = "Noada";
            cout << "Employee's City : " << emp3.emp_city << endl;

            emp3.emp_experience = 2;
            cout << "Employee's Experience : " << emp3.emp_experience << endl;

            emp3.emp_company_name = "Mhendra";
            cout << "Employee's Company Name : " << emp3.emp_company_name << endl;

        case 4:
            emp4.emp_id = 3030;
            cout << "Employee's id : " << emp4.emp_id << endl;

            emp4.emp_name = "Alex";
            cout << "Employee's Name : " << emp4.emp_name << endl;

            emp4.emp_age = 31;
            cout << "Employee's Age : " << emp4.emp_age << endl;

            emp4.emp_role = "Enginner";
            cout << "Employee's Role : " << emp4.emp_role << endl;

            emp4.emp_salary = 140000;
            cout << "Employee's Slaray : " << emp4.emp_salary << endl;

            emp4.emp_city = "Wosington";
            cout << "Employee's City : " << emp4.emp_city << endl;

            emp4.emp_experience = 4;
            cout << "Employee's Experience : " << emp4.emp_experience << endl;

            emp4.emp_company_name = "Tesla";
            cout << "Employee's Company Name : " << emp4.emp_company_name << endl;

        case 5:
            emp5.emp_id = 2020;
            cout << "Employee's id : " << emp5.emp_id << endl;

            emp5.emp_name = "Ramu";
            cout << "Employee's Name : " << emp5.emp_name << endl;

            emp5.emp_age = 26;
            cout << "Employee's Age : " << emp5.emp_age << endl;

            emp5.emp_role = "Chief Mecanic";
            cout << "Employee's Role : " << emp5.emp_role << endl;

            emp5.emp_salary = 60000;
            cout << "Employee's Slaray : " << emp5.emp_salary << endl;

            emp5.emp_city = "Ahemdabad";
            cout << "Employee's City : " << emp5.emp_city << endl;

            emp5.emp_experience = 3;
            cout << "Employee's Experience : " << emp5.emp_experience << endl;

            emp5.emp_company_name = "Land Rower";
            cout << "Employee's Company Name : " << emp5.emp_company_name << endl;

    }

    return 0;
}
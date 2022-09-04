#include "Factory.h"

Factory::Factory() {
    cout << "Number of employees: ";
    cin >> size;
    employees = new Employee[size];
    cout << "Factory created" << endl;
    cout << endl;
}

Factory::~Factory() {
    delete[] employees;
    cout << "Factory destroyed" << endl;
    cout << endl;
}

void Factory::Show() {
    cout << endl;
    cout << "Showing..." << endl;
    Employee *emps = employees;
    for (int i = 0; i < size; i++) {
        cout << "EMPLOYEE " << i + 1 << endl;
        cout << "Name: " << emps->name << endl;
        cout << "Lab age: " << emps->lab_age << endl;
        cout << "Pieces: ";
        int *pcs = employees[i].pieces;
        for (int j = 0; j < 3; ++j) cout << *(pcs + j) << " ";
        cout << endl;
        cout << endl;
        emps++;
    }
}

void Factory::Sort() {
    cout << endl;
    cout << "Sorting..." << endl;
    Employee *emps = employees;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if ((emps + i)->lab_age < (emps + j)->lab_age) {
                Employee temp = *(emps + i);
                *(emps + i) = *(emps + j);
                *(emps + j) = temp;
            }
        }
    }
}

void Factory::Register() {
    cout << endl;
    cout << "Registering..." << endl;
    Employee *emps = employees;
    for (int i = 0; i < size; i++) {
        cout << "EMPLOYEE " << i + 1 << endl;
        cout << "Name: ";
        cin >> emps->name;
        cout << "Lab age: ";
        cin >> emps->lab_age;
        cout << "Pieces: ";
        int *pcs = employees[i].pieces;
        for (int j = 0; j < 3; ++j) cin >> *(pcs + j);
        cout << endl;
        emps++;
    }
}
